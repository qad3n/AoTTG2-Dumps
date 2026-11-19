// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.AottgPopoverAttribute
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/AottgPopoverAttribute.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x2000076")]
[AttributeUsage(AttributeTargets.Class, Inherited = false)]
public sealed class AottgPopoverAttribute : Attribute
{
	[Token(Token = "0x17000057")]
	public string Id
	{
		[Token(Token = "0x600039D")]
		[Address(RVA = "0x5262010", Offset = "0x5261010", VA = "0x5262010")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000058")]
	public bool DismissOnBackdrop
	{
		[Token(Token = "0x600039E")]
		[Address(RVA = "0x5262020", Offset = "0x5261020", VA = "0x5262020")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600039F")]
		[Address(RVA = "0x5262030", Offset = "0x5261030", VA = "0x5262030")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000059")]
	public GisketchOverlayLifecycle Lifecycle
	{
		[Token(Token = "0x60003A0")]
		[Address(RVA = "0x5262040", Offset = "0x5261040", VA = "0x5262040")]
		[CompilerGenerated]
		get
		{
			return default(GisketchOverlayLifecycle);
		}
		[Token(Token = "0x60003A1")]
		[Address(RVA = "0x5262050", Offset = "0x5261050", VA = "0x5262050")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600039C")]
	[Address(RVA = "0x5261FE0", Offset = "0x5260FE0", VA = "0x5261FE0")]
	public AottgPopoverAttribute(string id)
	{
	}
}
