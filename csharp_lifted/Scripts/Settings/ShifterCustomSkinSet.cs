// ==================== AoTTG2 cross-reference ====================
// Type: Settings.ShifterCustomSkinSet
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/ShifterCustomSkinSet.c
// Prior real C# source (older reference): Assets/Scripts/Settings/CustomSkins/ShifterCustomSkinSet.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000A4")]
internal class ShifterCustomSkinSet : BaseSetSetting
{
	[Token(Token = "0x4000366")]
	[FieldOffset(Offset = "0x48")]
	public StringSetting Eren;

	[Token(Token = "0x4000367")]
	[FieldOffset(Offset = "0x50")]
	public StringSetting Annie;

	[Token(Token = "0x4000368")]
	[FieldOffset(Offset = "0x58")]
	public StringSetting Colossal;

	[Token(Token = "0x600048D")]
	[Address(RVA = "0x58D21E0", Offset = "0x58D11E0", VA = "0x58D21E0")]
	public ShifterCustomSkinSet()
	{
		// Lifted from source/cpp/Settings/ShifterCustomSkinSet.c (Settings.ShifterCustomSkinSet$$.ctor): clean
		String pSVar1;
		StringSetting pSVar2;

		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar2 = new StringSetting(pSVar1, 200);
		this.Eren = pSVar2;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar2 = new StringSetting(pSVar1, 200);
		this.Annie = pSVar2;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar2 = new StringSetting(pSVar1, 200);
		this.Colossal = pSVar2;
		base();
		return;
	}
}
