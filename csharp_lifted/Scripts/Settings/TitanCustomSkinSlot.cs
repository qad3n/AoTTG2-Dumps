// ==================== AoTTG2 cross-reference ====================
// Type: Settings.TitanCustomSkinSlot
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/TitanCustomSkinSlot.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000A8")]
internal class TitanCustomSkinSlot : BaseSettingsContainer
{
	[Token(Token = "0x4000376")]
	[FieldOffset(Offset = "0x30")]
	public IntSetting Target;

	[Token(Token = "0x4000377")]
	[FieldOffset(Offset = "0x38")]
	public StringSetting Body;

	[Token(Token = "0x4000378")]
	[FieldOffset(Offset = "0x40")]
	public StringSetting Head;

	[Token(Token = "0x4000379")]
	[FieldOffset(Offset = "0x48")]
	public StringSetting Eye;

	[Token(Token = "0x400037A")]
	[FieldOffset(Offset = "0x50")]
	public StringSetting Hair;

	[Token(Token = "0x400037B")]
	[FieldOffset(Offset = "0x58")]
	public IntSetting BodyModel;

	[Token(Token = "0x400037C")]
	[FieldOffset(Offset = "0x60")]
	public IntSetting HeadModel;

	[Token(Token = "0x400037D")]
	[FieldOffset(Offset = "0x68")]
	public IntSetting EyeModel;

	[Token(Token = "0x400037E")]
	[FieldOffset(Offset = "0x70")]
	public IntSetting HairModel;

	[Token(Token = "0x6000491")]
	[Address(RVA = "0x58D25F0", Offset = "0x58D15F0", VA = "0x58D25F0")]
	public TitanCustomSkinSlot()
	{
		// Lifted from source/cpp/Settings/TitanCustomSkinSlot.c (Settings.TitanCustomSkinSlot$$.ctor): clean
		String pSVar1;
		IntSetting pSVar2;
		StringSetting pSVar3;

		pSVar2 = new IntSetting(0, 0, 2);
		this.Target = pSVar2;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar3 = new StringSetting(pSVar1, 200);
		this.Body = pSVar3;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar3 = new StringSetting(pSVar1, 200);
		this.Head = pSVar3;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar3 = new StringSetting(pSVar1, 200);
		this.Eye = pSVar3;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar3 = new StringSetting(pSVar1, 200);
		this.Hair = pSVar3;
		pSVar2 = new IntSetting(0, 0, 0x7fffffff);
		this.BodyModel = pSVar2;
		pSVar2 = new IntSetting(0, 0, 0x7fffffff);
		this.HeadModel = pSVar2;
		pSVar2 = new IntSetting(0, 0, 0x7fffffff);
		this.EyeModel = pSVar2;
		pSVar2 = new IntSetting(0, 0, 0x7fffffff);
		this.HairModel = pSVar2;
		base();
		return;
	}
}
