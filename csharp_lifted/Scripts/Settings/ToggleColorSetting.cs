// ==================== AoTTG2 cross-reference ====================
// Type: Settings.ToggleColorSetting
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/ToggleColorSetting.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using SimpleJSONFixed;
using Utility;

namespace Settings;

[Token(Token = "0x200011D")]
internal class ToggleColorSetting : BaseSetting
{
	[Token(Token = "0x4000671")]
	[FieldOffset(Offset = "0x18")]
	public BoolSetting Enabled;

	[Token(Token = "0x4000672")]
	[FieldOffset(Offset = "0x20")]
	public ColorSetting Color;

	[Token(Token = "0x600060C")]
	[Address(RVA = "0x5B7CAC0", Offset = "0x5B7BAC0", VA = "0x5B7CAC0")]
	public ToggleColorSetting()
	{
		// Lifted from source/cpp/Settings/ToggleColorSetting.c (Settings.ToggleColorSetting$$.ctor): clean
		BoolSetting __this_00;
		Color255 __this_01;
		ColorSetting __this_02;

		__this_00 = new BoolSetting(false);
		this.Enabled = __this_00;
		__this_01 = new Color255(0xff, 0xff, 0xff, 0xff);
		__this_02 = new ColorSetting(__this_01, 0);
		this.Color = __this_02;
		base();
		return;
	}

	[Token(Token = "0x600060D")]
	[Address(RVA = "0x5B7CBA0", Offset = "0x5B7BBA0", VA = "0x5B7CBA0")]
	public ToggleColorSetting(bool defaultEnabled, Color255 defaultColor)
	{
		// Lifted from source/cpp/Settings/ToggleColorSetting.c (Settings.ToggleColorSetting$$.ctor): 4 lines keep C-only constructs
		BoolSetting* targetAddress;
		ColorSetting* targetAddress_00;
		BoolSetting pSVar1;
		Color255 __this_00;
		ColorSetting pSVar2;

		pSVar1 = new BoolSetting(false);
		targetAddress = &this.Enabled;
		this.Enabled = pSVar1;
		__this_00 = new Color255(0xff, 0xff, 0xff, 0xff);
		pSVar2 = new ColorSetting(__this_00, 0);
		targetAddress_00 = &this.Color;
		this.Color = pSVar2;
		base();
		pSVar1 = new BoolSetting(defaultEnabled);
		this.Enabled = pSVar1;
		pSVar2 = new ColorSetting(defaultColor, 0);
		this.Color = pSVar2;
		return;
	}

	[Token(Token = "0x600060E")]
	[Address(RVA = "0x5B7CD00", Offset = "0x5B7BD00", VA = "0x5B7CD00", Slot = "4")]
	public override void SetDefault()
	{
		// Lifted from source/cpp/Settings/ToggleColorSetting.c (Settings.ToggleColorSetting$$SetDefault): 3 lines keep C-only constructs
		BoolSetting pSVar1;
		ColorSetting pSVar2;
		Il2CppMethodPointer vtableDispatch;
		ulong extraout_RDX;

		pSVar1 = this.Enabled;
		if (pSVar1 != null) {
			pSVar1.SetDefault();
			pSVar2 = this.Color;
			if (pSVar2 != null) {
				vtableDispatch = (pSVar2.klass.vtable)._4_SetDefault.methodPtr;
				(*vtableDispatch)(pSVar2,(pSVar2.klass.vtable)._4_SetDefault.method,extraout_RDX,vtableDispatch);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600060F")]
	[Address(RVA = "0x5B7CD40", Offset = "0x5B7BD40", VA = "0x5B7CD40", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		// Lifted from source/cpp/Settings/ToggleColorSetting.c (Settings.ToggleColorSetting$$SerializeToJsonObject): clean
		BoolSetting pSVar1;
		ColorSetting pSVar2;
		JSONObject __this_00;
		JSONNode pSVar3;

		__this_00 = new JSONObject();
		pSVar1 = this.Enabled;
		if (pSVar1 != null) {
			pSVar3 = pSVar1.SerializeToJsonObject();
			if (__this_00 != null) {
				__this_00.Add("Enabled", pSVar3);
				pSVar2 = this.Color;
				if (pSVar2 != null) {
					pSVar3 = pSVar2.SerializeToJsonObject();
					__this_00.Add("Color", pSVar3);
					return (JSONNode)__this_00;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000610")]
	[Address(RVA = "0x5B7CE20", Offset = "0x5B7BE20", VA = "0x5B7CE20", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
		// Lifted from source/cpp/Settings/ToggleColorSetting.c (Settings.ToggleColorSetting$$DeserializeFromJsonObject): clean
		ColorSetting pSVar1;
		BoolSetting pSVar2;
		bool bVar3;
		JSONObject a;
		JSONNode pSVar4;

		bVar3 = (json == null);
		if (bVar3) {
	label_05c7ce98: ;
			this.SetDefault();
			return;
		}
		if (json != null) {
			bVar3 = json.get_IsArray();
			if (bVar3) {
				pSVar1 = this.Color;
				if (pSVar1 != null) {
					pSVar1.DeserializeFromJsonObject(json);
					pSVar2 = this.Enabled;
					if (pSVar2 != null) {
						pSVar2.Value = true;
						return;
					}
				}
			}
			else {
				a = json.get_AsObject();
				bVar3 = ((JSONNode)a == null);
				if (bVar3) goto label_05c7ce98;
				if (a != null) {
					pSVar4 = a.get_Item("Enabled");
					bVar3 = (pSVar4 != null);
					if (bVar3) {
						pSVar2 = this.Enabled;
						pSVar4 = a.get_Item("Enabled");
						if (pSVar2 == null) goto label_05c7d073;
						pSVar2.DeserializeFromJsonObject(pSVar4);
					}
					pSVar4 = a.get_Item("Color");
					bVar3 = (pSVar4 != null);
					if (!bVar3) {
						return;
					}
					pSVar1 = this.Color;
					pSVar4 = a.get_Item("Color");
					if (pSVar1 != null) {
						pSVar1.DeserializeFromJsonObject(pSVar4);
						return;
					}
				}
			}
		}
	label_05c7d073: ;
		throw new NullReferenceException();
	}
}
