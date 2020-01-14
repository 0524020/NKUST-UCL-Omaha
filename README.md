# Google Omaha 官方說明文件

## This is not an official Google product.

Omaha is the open-source version of Google Update, a program to install requested software and keep it up to date.  The Google-branded version of Omaha is used to support software patching (both background updating, and on-demand update checks) for Google Chrome, Earth, and a variety of other Google products on Windows 7, 8, and 10.

We know that keeping software updated is both important and hard, and so by open-sourcing this project, our hope is that perhaps we can help others solve this problem. So, if you'd like to get involved, or even use Omaha to support your own software projects, then just follow the instructions in the [Developer Setup Guide](https://github.com/google/omaha/blob/master/doc/DeveloperSetupGuide.md), and you'll be good to go!

There is also an unofficial [tutorial](https://fman.io/blog/google-omaha-tutorial/). Please note that it was written by a third party so we cannot guarantee its availability, accuracy or safety.


---
<br>

# UCLab Omaha 說明文件
注意 : 此版本僅用於NKUST UCL，Source Code中含有連接至 NKUST-UCL Omaha Server的金鑰憑證，請勿外傳。

### 參考網站
經測試，通常不同電腦、不同位元去建置Omaha Client所遇上的問題不盡相同，故先將所有具參考價值的網站列出:
<br>
1. [Google Omaha GitHub](https://github.com/google/omaha)

2. Brave 開源瀏覽器
<br>[Brave Omaha GitHub](https://github.com/brave/omaha)
<br>[How Brave update works](https://docs.google.com/presentation/d/1rtFJVbyJ3qIUq1V8Q1Hp_ZIokWt_0GgVH8djEdDnD9w/edit#slide=id.p)
<br>[Integrate brave branded omaha #179](https://github.com/brave/brave-browser/issues/179)
3. [Google Omaha Tutorial](https://omaha-consulting.com/google-omaha-tutorial)
4. [Omaha Server](https://github.com/Crystalnix/omaha-server)
5. [週報紀錄](https://drive.google.com/open?id=1SrwuGiMQElQU0C4PwHTg_05yCb7neqB_)


## Omaha Client 建置
### 1. Build 環境
使用[Developer Setup Guide](https://github.com/0524020/NKUST-UCL-Omaha/blob/master/doc/DeveloperSetupGuide.md)所需的工具及環境及步驟

- Build時須使用Developer Command
    - 如 : Visual Studio 20XX Developer Command Prompt 或 PowerShell
- 遇到建置失敗時先從參考網站中尋找錯誤，無法解決時再更改各項工具的版本(有些錯誤是因為Omaha無法支援第三方程式或是工具的新版本)
    - 如 : Scon、protobuf
- 建置完成後的資料夾為 "scons-out"，Update主程式及.dll在 "scons-out/dbg-win/staging"
- 此階段紀錄 [20190930週報](https://docs.google.com/presentation/d/1iAr-IRCYwzzYdx2MrCZ6qI2NzstH_77FBH8G1NxiqY0/edit?usp=sharing) / [20191007週報](https://docs.google.com/presentation/d/1eXwWpYJDztrHXabM4wO15ktHeETXkjjfzL_oZJzxxC4/edit?usp=sharing) / [20200103週報](https://docs.google.com/presentation/d/1YhMDDwmhaXHoehYtpQjEaS4qNbe76JBGpEg_Zo-ppLM/edit?usp=sharing)

### 2. 客製化Omaha
依照[CustomizingOmaha](https://github.com/0524020/NKUST-UCL-Omaha/blob/master/doc/CustomizingOmaha.md)進行修改
- 主要修改項目為 公司名稱、UUID、Omaha Server IP位址
- 目前source code都已修改完成
- Google的 [CustomizingOmaha.md](https://github.com/0524020/NKUST-UCL-Omaha/blob/master/doc/CustomizingOmaha.md) 修改並不包含Omaha主程式及其相關.dll檔名
    - 可參考[Build executable files with brave naming](https://github.com/brave/omaha/commit/d7dcb9ae46dfa3b7f33c6777e4984ac2cc5eba26)
- 此階段紀錄 [20191025週報](https://docs.google.com/presentation/d/1Ui6TACEwiSuoLwDz36fMJfTt84UhzzHMbxlXsv0ci1I/edit?usp=sharing)

### 3. MetaInstaller
參考[TaggedMetainstallers](https://github.com/0524020/NKUST-UCL-Omaha/blob/master/doc/TaggedMetainstallers.md)的說明，將MetaInstaller寫入Tag
- MetaInstaller定義 : [OmahaOverview.html](https://github.com/0524020/NKUST-UCL-Omaha/blob/master/doc/OmahaOverview.html)


## Omaha Server 建置
使用開源 [Crystalnix/omaha-server](https://github.com/Crystalnix/omaha-server)
- 建置完成後可利用 [Google Omaha Tutorial](https://omaha-consulting.com/google-omaha-tutorial) 所寫的教學對Server進行測試
- 此階段紀錄 [20191011週報](https://docs.google.com/presentation/d/1EpUag5jwhCKPvOOVTK3aVlMVIjVHWsFqw5R40_WyQao/edit?usp=sharing) / [20191018週報](https://docs.google.com/presentation/d/1wiR2J_HYxYPd-QaS0qmu_EAXPUYOsfciHii8tpDWSfM/edit?usp=sharing) / [20191115週報](https://docs.google.com/presentation/d/1bGo3IapFwhYvypTH92ROUeimkhgILfUI8hSA_fNSV94/edit?usp=sharing) / [20191122週報](https://docs.google.com/presentation/d/1yrTmxnufKOz0W3_lJIg-9tZz3XUenST-SB95INcPhkw/edit?usp=sharing)


## Client & Server 金鑰憑證
Client端連接至Server所需的憑證配置
- [Crystalnix/omaha-server](https://github.com/Crystalnix/omaha-server) 說明文件中有寫到如何使用憑證
- 製作Omaha金鑰 : [eckeytool](https://github.com/0524020/NKUST-UCL-Omaha/tree/master/omaha/tools/eckeytool)
- 詳細步驟 : [20191102週報](https://docs.google.com/presentation/d/1cjakAgxoz8L7IAfoW_a7QfMe7Z_eTxmXdcEya2E2_ro/edit?usp=sharing)

## Final
#### Hammer.bat預設build 「Debug模式」，確定Client無問題後可重新build一次正式版本<br>
指令:
> $ hammer MODE=opt-win<br>

- 更完整的 Hammer 參數意義 : [HammerOptions.md](https://github.com/0524020/NKUST-UCL-Omaha/blob/master/doc/HammerOptions.md)
