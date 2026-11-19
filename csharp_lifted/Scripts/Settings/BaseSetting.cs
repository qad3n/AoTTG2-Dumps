// ==================== AoTTG2 cross-reference ====================
// Type: Settings.BaseSetting
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/BaseSetting.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/BaseSetting.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Token(Token = "0x2000104")]
internal abstract class BaseSetting
{
	[Token(Token = "0x4000633")]
	[FieldOffset(Offset = "0x10")]
	public InspectorSettingMetadata InspectorMetadata;

	[Token(Token = "0x6000567")]
	public abstract void SetDefault();

	[Token(Token = "0x6000568")]
	public abstract JSONNode SerializeToJsonObject();

	[Token(Token = "0x6000569")]
	public abstract void DeserializeFromJsonObject(JSONNode json);

	[Token(Token = "0x600056A")]
	[Address(RVA = "0x5A54EE0", Offset = "0x5A53EE0", VA = "0x5A54EE0", Slot = "7")]
	public virtual object GetDefaultValue()
	{
		// Lifted from source/cpp/Settings/BaseSetting.c (Settings.BaseSetting$$GetDefaultValue): clean
		return null;
	}

	[Token(Token = "0x600056B")]
	[Address(RVA = "0x5A54EF0", Offset = "0x5A53EF0", VA = "0x5A54EF0", Slot = "8")]
	public virtual string SerializeToJsonString()
	{
		// Lifted from source/cpp/Settings/BaseSetting.c (Settings.BaseSetting$$SerializeToJsonString): 1 lines keep C-only constructs
		long lVar1;
		long plVar2;
		String pSVar3;

		plVar2 = (long)this.unknown();
		if (plVar2 == null) {
			throw new NullReferenceException();
		}
		lVar1 = *plVar2;
		pSVar3 = (String)(**(code*)(lVar1 + 0x318))(plVar2,4,*(ulong)(lVar1 + 800),lVar1,*(code*)(lVar1 + 0x318)) ;
		return pSVar3;
	}

	[Token(Token = "0x600056C")]
	[Address(RVA = "0x5A54F30", Offset = "0x5A53F30", VA = "0x5A54F30", Slot = "9")]
	public virtual void DeserializeFromJsonString(string json)
	{
		// Lifted from source/cpp/Settings/BaseSetting.c (Settings.BaseSetting$$DeserializeFromJsonString): 3 lines keep C-only constructs
		BaseSetting pSVar1;
		Il2CppMethodPointer vtableDispatch;
		JSONNode pSVar2;

		pSVar2 = JSON.Parse(json);
		pSVar1 = this.klass;
		vtableDispatch = (pSVar1.vtable)._6_unknown.methodPtr;
		(*vtableDispatch)(this,pSVar2,(pSVar1.vtable)._6_unknown.method,pSVar1,vtableDispatch);
		return;
	}

	[Token(Token = "0x600056D")]
	[Address(RVA = "0x5A54F60", Offset = "0x5A53F60", VA = "0x5A54F60", Slot = "10")]
	public virtual void Copy(BaseSetting other)
	{
		// Lifted from source/cpp/Settings/BaseSetting.c (Settings.BaseSetting$$Copy): 3 lines keep C-only constructs
		BaseSetting pSVar1;
		Il2CppMethodPointer vtableDispatch;
		ulong uVar2;

		if (other == null) {
			throw new NullReferenceException();
		}
		uVar2 = other.unknown();
		pSVar1 = this.klass;
		vtableDispatch = (pSVar1.vtable)._6_unknown.methodPtr;
		(*vtableDispatch)(this,uVar2,(pSVar1.vtable)._6_unknown.method,pSVar1,vtableDispatch);
		return;
	}

	[Token(Token = "0x600056E")]
	[Address(RVA = "0x5A54FA0", Offset = "0x5A53FA0", VA = "0x5A54FA0")]
	protected BaseSetting()
	{
		// Lifted from source/cpp/Settings/BaseSetting.c (Settings.BaseSetting$$.ctor): clean
		InspectorSettingMetadata __this_00;

		__this_00 = new InspectorSettingMetadata();
		this.InspectorMetadata = __this_00;
		base();
		return;
	}
}
