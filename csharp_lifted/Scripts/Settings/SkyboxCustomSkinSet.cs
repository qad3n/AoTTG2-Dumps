// ==================== AoTTG2 cross-reference ====================
// Type: Settings.SkyboxCustomSkinSet
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/SkyboxCustomSkinSet.c
// Prior real C# source (older reference): Assets/Scripts/Settings/CustomSkins/SkyboxCustomSkinSet.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000A5")]
internal class SkyboxCustomSkinSet : BaseSetSetting
{
	[Token(Token = "0x4000369")]
	[FieldOffset(Offset = "0x48")]
	public StringSetting Front;

	[Token(Token = "0x400036A")]
	[FieldOffset(Offset = "0x50")]
	public StringSetting Back;

	[Token(Token = "0x400036B")]
	[FieldOffset(Offset = "0x58")]
	public StringSetting Left;

	[Token(Token = "0x400036C")]
	[FieldOffset(Offset = "0x60")]
	public StringSetting Right;

	[Token(Token = "0x400036D")]
	[FieldOffset(Offset = "0x68")]
	public StringSetting Up;

	[Token(Token = "0x400036E")]
	[FieldOffset(Offset = "0x70")]
	public StringSetting Down;

	[Token(Token = "0x600048E")]
	[Address(RVA = "0x58D22F0", Offset = "0x58D12F0", VA = "0x58D22F0")]
	public SkyboxCustomSkinSet()
	{
		// Lifted from source/cpp/Settings/SkyboxCustomSkinSet.c (Settings.SkyboxCustomSkinSet$$.ctor): clean
		String pSVar1;
		StringSetting pSVar2;

		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar2 = new StringSetting(pSVar1, 200);
		this.Front = pSVar2;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar2 = new StringSetting(pSVar1, 200);
		this.Back = pSVar2;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar2 = new StringSetting(pSVar1, 200);
		this.Left = pSVar2;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar2 = new StringSetting(pSVar1, 200);
		this.Right = pSVar2;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar2 = new StringSetting(pSVar1, 200);
		this.Up = pSVar2;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar2 = new StringSetting(pSVar1, 200);
		this.Down = pSVar2;
		base();
		return;
	}
}
