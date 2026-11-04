// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.AottgPopoverAttribute
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/AottgPopoverAttribute.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x2000070")]
[AttributeUsage(AttributeTargets.Class, Inherited = false)]
public sealed class AottgPopoverAttribute : Attribute
{
	[Token(Token = "0x17000057")]
	public string Id
	{
		[Token(Token = "0x6000352")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000058")]
	public bool DismissOnBackdrop
	{
		[Token(Token = "0x6000353")]
		[Address(RVA = "0x111AD30", Offset = "0x1119330", VA = "0x18111AD30")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000354")]
		[Address(RVA = "0x111C9F0", Offset = "0x111AFF0", VA = "0x18111C9F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000059")]
	public GisketchOverlayLifecycle Lifecycle
	{
		[Token(Token = "0x6000355")]
		[Address(RVA = "0xD23EC0", Offset = "0xD224C0", VA = "0x180D23EC0")]
		[CompilerGenerated]
		get
		{
			return default(GisketchOverlayLifecycle);
		}
		[Token(Token = "0x6000356")]
		[Address(RVA = "0xD23F80", Offset = "0xD22580", VA = "0x180D23F80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000351")]
	[Address(RVA = "0x12B8CD0", Offset = "0x12B72D0", VA = "0x1812B8CD0")]
	public AottgPopoverAttribute(string id)
	{
	}
}
