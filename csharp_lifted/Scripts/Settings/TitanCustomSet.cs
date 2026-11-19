// ==================== AoTTG2 cross-reference ====================
// Type: Settings.TitanCustomSet
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/TitanCustomSet.c
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/TitanCustomSet.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000EA")]
internal class TitanCustomSet : BaseSetSetting
{
	[Token(Token = "0x4000516")]
	public const int RandomModel = -1;

	[Token(Token = "0x4000517")]
	public const string RandomHair = "Random";

	[Token(Token = "0x4000518")]
	[FieldOffset(Offset = "0x48")]
	public IntSetting Head;

	[Token(Token = "0x4000519")]
	[FieldOffset(Offset = "0x50")]
	public IntSetting Body;

	[Token(Token = "0x400051A")]
	[FieldOffset(Offset = "0x58")]
	public IntSetting Eye;

	[Token(Token = "0x400051B")]
	[FieldOffset(Offset = "0x60")]
	public StringSetting Hair;

	[Token(Token = "0x400051C")]
	[FieldOffset(Offset = "0x68")]
	public ColorSetting SkinColor;

	[Token(Token = "0x400051D")]
	[FieldOffset(Offset = "0x70")]
	public ColorSetting HairColor;

	[Token(Token = "0x6000527")]
	[Address(RVA = "0x5A49B00", Offset = "0x5A48B00", VA = "0x5A49B00")]
	public bool IsRandomHair()
	{
		// Lifted from source/cpp/Settings/TitanCustomSet.c (Settings.TitanCustomSet$$IsRandomHair): clean
		StringSetting pSVar1;
		bool bVar2;

		pSVar1 = this.Hair;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		bVar2 = (pSVar1._value == "Random");
		return bVar2;
	}

	[Token(Token = "0x6000528")]
	[Address(RVA = "0x5A49B50", Offset = "0x5A48B50", VA = "0x5A49B50")]
	public int GetBody()
	{
		// Lifted from source/cpp/Settings/TitanCustomSet.c (Settings.TitanCustomSet$$GetBody): clean
		int iVar1;
		IntSetting pSVar2;
		int iVar3;

		pSVar2 = this.Body;
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		iVar1 = pSVar2._value;
		if (0 < iVar1) {
		}
		return iVar3;
	}

	[Token(Token = "0x6000529")]
	[Address(RVA = "0x5A49B90", Offset = "0x5A48B90", VA = "0x5A49B90")]
	public int GetHead()
	{
		// Lifted from source/cpp/Settings/TitanCustomSet.c (Settings.TitanCustomSet$$GetHead): clean
		int iVar1;
		IntSetting pSVar2;
		int iVar3;

		pSVar2 = this.Head;
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		iVar1 = pSVar2._value;
		if (0 < iVar1) {
		}
		return iVar3;
	}

	[Token(Token = "0x600052A")]
	[Address(RVA = "0x5A49BD0", Offset = "0x5A48BD0", VA = "0x5A49BD0")]
	public int GetEye()
	{
		// Lifted from source/cpp/Settings/TitanCustomSet.c (Settings.TitanCustomSet$$GetEye): clean
		int iVar1;
		IntSetting pSVar2;
		int iVar3;

		pSVar2 = this.Eye;
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		iVar1 = pSVar2._value;
		if (0 < iVar1) {
		}
		return iVar3;
	}

	[Token(Token = "0x600052B")]
	[Address(RVA = "0x5A49C10", Offset = "0x5A48C10", VA = "0x5A49C10")]
	public string GetHair()
	{
		// Lifted from source/cpp/Settings/TitanCustomSet.c (Settings.TitanCustomSet$$GetHair): clean
		StringSetting pSVar1;
		bool bVar2;
		List<string> __this_00;
		String pSVar3;

		if (Il2CppMethodInitialized_0754729b == false) {
			Il2CppMethodInitialized_0754729b = true;
			if (Il2CppMethodInitialized_07547297 == false) goto label_05b49c77;
	label_05b49c29: ;
			pSVar1 = this.Hair;
		}
		else {
			if (Il2CppMethodInitialized_07547297 != false) goto label_05b49c29;
	label_05b49c77: ;
			Il2CppMethodInitialized_07547297 = true;
			pSVar1 = this.Hair;
		}
		if (pSVar1 != null) {
			bVar2 = (pSVar1._value == "Random");
			if (bVar2) {
				__this_00 = BasicTitanSetup.AllHairs;
				if (__this_00 == null) goto label_05b49d3e;
				if (0 < __this_00._size) {
					if ((typeof(BasicTitanSetup)._2).cctor_finished_or_no_cctor == 0) {
						__this_00 = BasicTitanSetup.AllHairs;
						if (__this_00 == null) goto label_05b49d3e;
					}
					return pSVar3;
				}
			}
			pSVar1 = this.Hair;
			if (pSVar1 != null) {
				return pSVar1._value;
			}
		}
	label_05b49d3e: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600052C")]
	[Address(RVA = "0x5A49D50", Offset = "0x5A48D50", VA = "0x5A49D50")]
	public TitanCustomSet()
	{
		// Lifted from source/cpp/Settings/TitanCustomSet.c (Settings.TitanCustomSet$$.ctor): 1 lines keep C-only constructs
		int iVar1;
		IntSetting pSVar2;
		StringSetting __this_00;
		Color255 pUVar3;
		ColorSetting __this_01;
		MethodInfo method_00;

		pSVar2.MinValue = -0x80000000;
		pSVar2.MaxValue = 0x7fffffff;
		pSVar2 = new IntSetting();
		pSVar2.MinValue = -1;
		pSVar2.MaxValue = 0x7fffffff;
		iVar1 = pSVar2.SanitizeValue(-1);
		pSVar2.DefaultValue = iVar1;
		pSVar2.SetDefault();
		this.Head = pSVar2;
		pSVar2.MinValue = -0x80000000;
		pSVar2.MaxValue = 0x7fffffff;
		pSVar2 = new IntSetting();
		pSVar2.MinValue = -1;
		pSVar2.MaxValue = 0x7fffffff;
		iVar1 = pSVar2.SanitizeValue(-1);
		pSVar2.DefaultValue = iVar1;
		pSVar2.SetDefault();
		this.Body = pSVar2;
		pSVar2.MinValue = -0x80000000;
		pSVar2.MaxValue = 0x7fffffff;
		pSVar2 = new IntSetting();
		pSVar2.MinValue = -1;
		pSVar2.MaxValue = 0x7fffffff;
		iVar1 = pSVar2.SanitizeValue(-1);
		pSVar2.DefaultValue = iVar1;
		pSVar2.SetDefault();
		this.Eye = pSVar2;
		__this_00 = new StringSetting("Random", 0x7fffffff);
		this.Hair = __this_00;
		pUVar3 = new Color255(0xff, 0xff, 0xff, 0xff);
		__this_01 = new ColorSetting();
		__this_01.MinAlpha = 0;
		pUVar3 = __this_01.SanitizeValue(pUVar3);
		__this_01.DefaultValue = pUVar3;
		__this_01.Value = (object)__this_01.DefaultValue;
		this.SkinColor = __this_01;
		pUVar3 = new Color255(0x80, 0x80, 0x80, 0xff);
		method_00 = new ColorSetting();
		*(int)&method_00.return_type = 0;
		pUVar3 = method_00.SanitizeValue(pUVar3);
		method_00.name = (sbyte)pUVar3;
		method_00.Value = (object)method_00.name;
		this.HairColor = (ColorSetting)method_00;
		base();
		return;
	}
}
