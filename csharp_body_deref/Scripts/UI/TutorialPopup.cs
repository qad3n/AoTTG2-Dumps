// ==================== AoTTG2 cross-reference ====================
// Type: UI.TutorialPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/TutorialPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/TutorialPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x200080E")]
internal class TutorialPopup : BasePopup
{
	[Token(Token = "0x4002867")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private string _basicTutorials;

	[Token(Token = "0x4002868")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private string _advancedTutorials;

	[Token(Token = "0x4002869")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private string _miscTutorials;

	[Token(Token = "0x17000E38")]
	protected override string Title
	{
		[Token(Token = "0x6004DAD")]
		[Address(RVA = "0x229C2B0", Offset = "0x229A8B0", VA = "0x18229C2B0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000E39")]
	protected override float Width
	{
		[Token(Token = "0x6004DAE")]
		[Address(RVA = "0x210FB90", Offset = "0x210E190", VA = "0x18210FB90", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E3A")]
	protected override float Height
	{
		[Token(Token = "0x6004DAF")]
		[Address(RVA = "0x21C6340", Offset = "0x21C4940", VA = "0x1821C6340", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E3B")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004DB0")]
		[Address(RVA = "0x2168BC0", Offset = "0x21671C0", VA = "0x182168BC0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E3C")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004DB1")]
		[Address(RVA = "0x847040", Offset = "0x845640", VA = "0x180847040", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000E3D")]
	protected override bool UseSound
	{
		[Token(Token = "0x6004DB2")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "53")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004DB3")]
	[Address(RVA = "0x229BD20", Offset = "0x229A320", VA = "0x18229BD20", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004DB4")]
	[Address(RVA = "0x229B850", Offset = "0x2299E50", VA = "0x18229B850")]
	protected void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6004DB5")]
	[Address(RVA = "0x229C200", Offset = "0x229A800", VA = "0x18229C200")]
	public TutorialPopup()
	{
	}
}
