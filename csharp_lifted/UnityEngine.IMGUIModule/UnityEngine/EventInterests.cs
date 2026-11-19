// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.EventInterests
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000007")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
internal struct EventInterests
{
	[Token(Token = "0x1700001E")]
	public bool wantsMouseMove
	{
		[Token(Token = "0x6000052")]
		[Address(RVA = "0x697AFA0", Offset = "0x6979FA0", VA = "0x697AFA0")]
		[CompilerGenerated]
		readonly get
		{
			return default(bool);
		}
		[Token(Token = "0x6000053")]
		[Address(RVA = "0x697AFB0", Offset = "0x6979FB0", VA = "0x697AFB0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001F")]
	public bool wantsMouseEnterLeaveWindow
	{
		[Token(Token = "0x6000054")]
		[Address(RVA = "0x697AFC0", Offset = "0x6979FC0", VA = "0x697AFC0")]
		[CompilerGenerated]
		readonly get
		{
			return default(bool);
		}
		[Token(Token = "0x6000055")]
		[Address(RVA = "0x697AFD0", Offset = "0x6979FD0", VA = "0x697AFD0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000020")]
	public readonly bool wantsLessLayoutEvents
	{
		[Token(Token = "0x6000056")]
		[Address(RVA = "0x697AFE0", Offset = "0x6979FE0", VA = "0x697AFE0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x697AFF0", Offset = "0x6979FF0", VA = "0x697AFF0")]
	public bool WantsEvent(EventType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x697B010", Offset = "0x697A010", VA = "0x697B010")]
	public bool WantsLayoutPass(EventType type)
	{
		return default(bool);
	}
}
