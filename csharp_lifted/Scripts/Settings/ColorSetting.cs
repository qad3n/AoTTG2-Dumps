// ==================== AoTTG2 cross-reference ====================
// Type: Settings.ColorSetting
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/ColorSetting.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/ColorSetting.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using SimpleJSONFixed;
using Utility;

namespace Settings;

[Token(Token = "0x2000109")]
internal class ColorSetting : TypedSetting<Color255>
{
	[Token(Token = "0x4000645")]
	[FieldOffset(Offset = "0x28")]
	public int MinAlpha;

	[Token(Token = "0x6000580")]
	[Address(RVA = "0x5A55460", Offset = "0x5A54460", VA = "0x5A55460")]
	public ColorSetting()
	{
		// Lifted from source/cpp/Settings/ColorSetting.c (Settings.ColorSetting$$.ctor): clean
		Color255 __this_00;

		__this_00 = new Color255(0xff, 0xff, 0xff, 0xff);
		base((object)__this_00);
		return;
	}

	[Token(Token = "0x6000581")]
	[Address(RVA = "0x5A451C0", Offset = "0x5A441C0", VA = "0x5A451C0")]
	public ColorSetting(Color255 defaultValue, int minAlpha = 0)
	{
		// Lifted from source/cpp/Settings/ColorSetting.c (Settings.ColorSetting$$.ctor): clean
		Color255 pUVar1;

		base();
		this.MinAlpha = minAlpha;
		pUVar1 = this.SanitizeValue(defaultValue);
		this.DefaultValue = pUVar1;
		this.Value = (object)this.DefaultValue;
		return;
	}

	[Token(Token = "0x6000582")]
	[Address(RVA = "0x5A554E0", Offset = "0x5A544E0", VA = "0x5A554E0", Slot = "11")]
	protected override Color255 SanitizeValue(Color255 value)
	{
		// Lifted from source/cpp/Settings/ColorSetting.c (Settings.ColorSetting$$SanitizeValue): clean
		int iVar1;
		int iVar2;
		int iVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;

		if (value == null) {
			throw new NullReferenceException();
		}
		uVar5 = value.R;
		uVar7 = value.G;
		uVar4 = -(uint)((int)uVar5 < 0xff);
		uVar6 = -(uint)((int)uVar7 < 0xff);
		uVar5 = ~uVar4 & 0xff | uVar5 & uVar4;
		uVar7 = ~uVar6 & 0xff | uVar7 & uVar6;
		value.R = -(uint)(0 < (int)uVar5) & uVar5;
		value.G = -(uint)(0 < (int)uVar7) & uVar7;
		iVar2 = value.B;
		iVar1 = value.A;
		if (0xfe < iVar2) {
			iVar2 = 0xff;
		}
		iVar3 = 0;
		if (0 < iVar2) {
			iVar3 = iVar2;
		}
		value.B = iVar3;
		iVar2 = this.MinAlpha;
		iVar3 = 0xff;
		if (iVar1 < 0xff) {
			iVar3 = iVar1;
		}
		if (iVar1 < iVar2) {
			iVar3 = iVar2;
		}
		value.A = iVar3;
		return value;
	}

	[Token(Token = "0x6000583")]
	[Address(RVA = "0x5A55560", Offset = "0x5A54560", VA = "0x5A55560", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		// Lifted from source/cpp/Settings/ColorSetting.c (Settings.ColorSetting$$SerializeToJsonObject): clean
		int iVar1;
		Color255 pUVar2;
		JSONArray __this_00;
		JSONNumber pSVar3;

		__this_00 = new JSONArray();
		pUVar2 = this._value;
		if (pUVar2 != null) {
			iVar1 = pUVar2.R;
			pSVar3 = new JSONNumber((double)iVar1);
			if (__this_00 != null) {
				__this_00.Add((JSONNode)pSVar3);
				pUVar2 = this._value;
				if (pUVar2 != null) {
					iVar1 = pUVar2.G;
					pSVar3 = new JSONNumber((double)iVar1);
					__this_00.Add((JSONNode)pSVar3);
					pUVar2 = this._value;
					if (pUVar2 != null) {
						iVar1 = pUVar2.B;
						pSVar3 = new JSONNumber((double)iVar1);
						__this_00.Add((JSONNode)pSVar3) ;
						pUVar2 = this._value;
						if (pUVar2 != null) {
							iVar1 = pUVar2.A;
							pSVar3 = new JSONNumber((double)iVar1);
							__this_00.Add((JSONNode)pSVar3);
							return (JSONNode)__this_00;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000584")]
	[Address(RVA = "0x5A55710", Offset = "0x5A54710", VA = "0x5A55710", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
		// Lifted from source/cpp/Settings/ColorSetting.c (Settings.ColorSetting$$DeserializeFromJsonObject): 4 lines keep C-only constructs
		int r;
		int g;
		int b;
		int a;
		JSONArray pSVar1;
		JSONNode pSVar2;
		Color255 __this_00;

		if (json != null) {
			pSVar1 = json.get_AsArray();
			if (pSVar1 != null) {
				pSVar2 = pSVar1.get_Item(0);
				if (pSVar2 != null) {
					r = (**(code*)((long)pSVar2.klass + 0x368))(pSVar2,*(ulong)((long)pSVar2.klass + 0x370));
					pSVar2 = pSVar1.get_Item(1);
					if (pSVar2 != null) {
						g = (**(code*)((long)pSVar2.klass + 0x368))(pSVar2,*(ulong)((long)pSVar2.klass + 0x370));
						pSVar2 = pSVar1.get_Item(2);
						if (pSVar2 != null) {
							b = (**(code*)((long)pSVar2.klass + 0x368))(pSVar2,*(ulong)((long)pSVar2.klass + 0x370));
							pSVar2 = pSVar1.get_Item(3);
							if (pSVar2 != null) {
								a = (**(code*)((long)pSVar2.klass + 0x368))(pSVar2,*(ulong)((long)pSVar2.klass + 0x370));
								__this_00 = new Color255(r, g, b, a);
								this.Value = (object)__this_00;
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}
}
