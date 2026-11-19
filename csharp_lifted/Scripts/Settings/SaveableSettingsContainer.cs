// ==================== AoTTG2 cross-reference ====================
// Type: Settings.SaveableSettingsContainer
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/SaveableSettingsContainer.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/SaveableSettingsContainer.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Token(Token = "0x2000116")]
internal abstract class SaveableSettingsContainer : BaseSettingsContainer
{
	[Token(Token = "0x400065F")]
	private const string VersionKey = "SettingsVersion";

	[Token(Token = "0x4000660")]
	[FieldOffset(Offset = "0x30")]
	private bool _migrationPending;

	[Token(Token = "0x170000C6")]
	protected virtual string FolderPath
	{
		[Token(Token = "0x60005E2")]
		[Address(RVA = "0x5B7C450", Offset = "0x5B7B450", VA = "0x5B7C450", Slot = "14")]
		get
		{
			// Lifted from source/cpp/Settings/SaveableSettingsContainer.c (Settings.SaveableSettingsContainer$$get_FolderPath): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07547980 == false) {
				Il2CppMethodInitialized_07547980 = true;
				uVar1 = (typeof(FolderPaths)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(FolderPaths)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return FolderPaths.Settings;
			}
			return *(String*)((long)(typeof(FolderPaths)).static_fields + 0x28);
		}
	}

	[Token(Token = "0x170000C7")]
	protected abstract string FileName
	{
		[Token(Token = "0x60005E3")]
		get;
	}

	[Token(Token = "0x170000C8")]
	protected virtual bool Encrypted
	{
		[Token(Token = "0x60005E4")]
		[Address(RVA = "0x5B7C4C0", Offset = "0x5B7B4C0", VA = "0x5B7C4C0", Slot = "16")]
		get
		{
			// Lifted from source/cpp/Settings/SaveableSettingsContainer.c (Settings.SaveableSettingsContainer$$get_Encrypted): clean
			return false;
		}
	}

	[Token(Token = "0x170000C9")]
	protected virtual int CurrentVersion
	{
		[Token(Token = "0x60005E5")]
		[Address(RVA = "0x5B7C4D0", Offset = "0x5B7B4D0", VA = "0x5B7C4D0", Slot = "17")]
		get
		{
			// Lifted from source/cpp/Settings/SaveableSettingsContainer.c (Settings.SaveableSettingsContainer$$get_CurrentVersion): clean
			return 0;
		}
	}

	[Token(Token = "0x60005E6")]
	[Address(RVA = "0x5B7C4E0", Offset = "0x5B7B4E0", VA = "0x5B7C4E0", Slot = "11")]
	protected override void Setup()
	{
		// Lifted from source/cpp/Settings/SaveableSettingsContainer.c (Settings.SaveableSettingsContainer$$Setup): clean
		this.RegisterSettings();
		this.Load();
		this.Apply();
		return;
	}

	[Token(Token = "0x60005E7")]
	[Address(RVA = "0x5B7C520", Offset = "0x5B7B520", VA = "0x5B7C520", Slot = "18")]
	public virtual void Save()
	{
		// Lifted from source/cpp/Settings/SaveableSettingsContainer.c (Settings.SaveableSettingsContainer$$Save): clean
		bool bVar1;
		String pSVar2;
		SimpleAES __this_00;
		String path;

		pSVar2 = this.get_FolderPath();
		Directory.CreateDirectory(pSVar2);
		pSVar2 = this.SerializeToJsonString();
		bVar1 = this.get_Encrypted();
		if (bVar1) {
			__this_00 = new SimpleAES();
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			pSVar2 = __this_00.Encrypt(pSVar2);
		}
		path = this.GetFilePath();
		File.WriteAllText(path, pSVar2);
		return;
	}

	[Token(Token = "0x60005E8")]
	[Address(RVA = "0x5B7C1E0", Offset = "0x5B7B1E0", VA = "0x5B7C1E0", Slot = "19")]
	public virtual void Load()
	{
		// Lifted from source/cpp/Settings/SaveableSettingsContainer.c (Settings.SaveableSettingsContainer$$Load): 5 lines keep C-only constructs
		VirtualInvokeData_6411beea80bb pVVar1;
		bool bVar2;
		String pSVar3;
		SimpleAES __this_00;
		VirtualInvokeData_6411beea80bb pVVar4;

		pSVar3 = this.GetFilePath();
		bVar2 = File.Exists(pSVar3);
		if (bVar2) {
			pSVar3 = File.ReadAllText(pSVar3);
			bVar2 = this.get_Encrypted();
			if (bVar2) {
				__this_00 = new SimpleAES();
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				pSVar3 = __this_00.Decrypt(pSVar3);
			}
			this.DeserializeFromJsonString(pSVar3);
			if (this._migrationPending == false) {
				return;
			}
			pVVar4 = &(this.klass.vtable)._18_Save;
			pVVar1 = &(this.klass.vtable)._18_Save;
		}
		else {
			pVVar4 = &(this.klass.vtable)._20_LoadLegacy;
			pVVar1 = &(this.klass.vtable)._20_LoadLegacy;
		}
		(*pVVar4.methodPtr)(this,pVVar1.method);
		return;
	}

	[Token(Token = "0x60005E9")]
	[Address(RVA = "0x5B7C6D0", Offset = "0x5B7B6D0", VA = "0x5B7C6D0", Slot = "20")]
	protected virtual void LoadLegacy()
	{
		// Lifted from source/cpp/Settings/SaveableSettingsContainer.c (Settings.SaveableSettingsContainer$$LoadLegacy): clean
		return;
	}

	[Token(Token = "0x60005EA")]
	[Address(RVA = "0x5B7C6E0", Offset = "0x5B7B6E0", VA = "0x5B7C6E0", Slot = "21")]
	protected virtual bool Migrate(int fromVersion)
	{
		// Lifted from source/cpp/Settings/SaveableSettingsContainer.c (Settings.SaveableSettingsContainer$$Migrate): clean
		return false;
	}

	[Token(Token = "0x60005EB")]
	[Address(RVA = "0x5B7C6F0", Offset = "0x5B7B6F0", VA = "0x5B7C6F0", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		// Lifted from source/cpp/Settings/SaveableSettingsContainer.c (Settings.SaveableSettingsContainer$$SerializeToJsonObject): clean
		int iVar1;
		JSONNode pSVar2;
		JSONNode pSVar3;

		pSVar2 = this.SerializeToJsonObject();
		iVar1 = this.get_CurrentVersion();
		if (0 < iVar1) {
			iVar1 = this.get_CurrentVersion();
			pSVar3 = ((JSONNode)iVar1);
			if (pSVar2 == null) {
				throw new NullReferenceException();
			}
			pSVar2.Add("SettingsVersion", pSVar3);
		}
		return pSVar2;
	}

	[Token(Token = "0x60005EC")]
	[Address(RVA = "0x5B7C7B0", Offset = "0x5B7B7B0", VA = "0x5B7C7B0", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
		// Lifted from source/cpp/Settings/SaveableSettingsContainer.c (Settings.SaveableSettingsContainer$$DeserializeFromJsonObject): 1 lines keep C-only constructs
		byte bVar1;
		JSONNode pSVar2;
		bool bVar3;
		int iVar4;
		int iVar5;
		JSONNode pSVar6;

		this.DeserializeFromJsonObject(json);
		this._migrationPending = false;
		iVar4 = this.get_CurrentVersion();
		if ((iVar4 != 0) && (json != null)) {
			pSVar2 = json.klass;
			bVar1 = (typeof(JSONObject)._2).typeHierarchyDepth;
			if ((bVar1 <= (pSVar2._2).typeHierarchyDepth) &&((pSVar2._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(JSONObject))) {
				pSVar6 = json.get_Item("SettingsVersion");
				if (pSVar6 == null) {
	label_05c7c8f2: ;
					throw new NullReferenceException();
				}
				bVar3 = pSVar6.get_IsNumber();
				iVar4 = 0;
				if (bVar3) {
					pSVar6 = json.get_Item("SettingsVersion");
					if (pSVar6 == null) goto label_05c7c8f2;
					iVar4 = pSVar6.get_AsInt();
				}
				iVar5 = this.get_CurrentVersion();
				if (iVar4 < iVar5) {
					bVar3 = this.Migrate(iVar4);
					this._migrationPending = bVar3;
				}
			}
		}
		return;
	}

	[Token(Token = "0x60005ED")]
	[Address(RVA = "0x5B7C900", Offset = "0x5B7B900", VA = "0x5B7C900", Slot = "22")]
	protected virtual string GetFilePath()
	{
		// Lifted from source/cpp/Settings/SaveableSettingsContainer.c (Settings.SaveableSettingsContainer$$GetFilePath): clean
		String pSVar1;
		String str2;

		pSVar1 = this.get_FolderPath();
		str2 = (String)this.unknown();
		pSVar1 = String.Concat(pSVar1, "/", str2);
		return pSVar1;
	}

	[Token(Token = "0x60005EE")]
	[Address(RVA = "0x5B7C440", Offset = "0x5B7B440", VA = "0x5B7C440")]
	protected SaveableSettingsContainer()
	{
		// Lifted from source/cpp/Settings/SaveableSettingsContainer.c (Settings.SaveableSettingsContainer$$.ctor): clean
		base();
		return;
	}
}
