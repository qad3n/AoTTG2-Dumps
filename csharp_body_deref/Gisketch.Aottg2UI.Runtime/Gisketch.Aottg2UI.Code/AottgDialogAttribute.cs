// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.AottgDialogAttribute
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/AottgDialogAttribute.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x200006F")]
[AttributeUsage(AttributeTargets.Class, Inherited = false)]
public sealed class AottgDialogAttribute : Attribute
{
	[Token(Token = "0x17000053")]
	public string Id
	{
		[Token(Token = "0x600034A")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000054")]
	public bool Modal
	{
		[Token(Token = "0x600034B")]
		[Address(RVA = "0x111AD30", Offset = "0x1119330", VA = "0x18111AD30")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600034C")]
		[Address(RVA = "0x111C9F0", Offset = "0x111AFF0", VA = "0x18111C9F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000055")]
	public bool DismissOnBackdrop
	{
		[Token(Token = "0x600034D")]
		[Address(RVA = "0xE8F450", Offset = "0xE8DA50", VA = "0x180E8F450")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600034E")]
		[Address(RVA = "0x18C3360", Offset = "0x18C1960", VA = "0x1818C3360")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000056")]
	public GisketchOverlayLifecycle Lifecycle
	{
		[Token(Token = "0x600034F")]
		[Address(RVA = "0xD23EC0", Offset = "0xD224C0", VA = "0x180D23EC0")]
		[CompilerGenerated]
		get
		{
			return default(GisketchOverlayLifecycle);
		}
		[Token(Token = "0x6000350")]
		[Address(RVA = "0xD23F80", Offset = "0xD22580", VA = "0x180D23F80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000349")]
	[Address(RVA = "0x18C3320", Offset = "0x18C1920", VA = "0x1818C3320")]
	public AottgDialogAttribute(string id)
	{
	}
}
