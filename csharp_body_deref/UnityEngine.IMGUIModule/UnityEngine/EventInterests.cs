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
		[Address(RVA = "0xAE2930", Offset = "0xAE0F30", VA = "0x180AE2930")]
		[CompilerGenerated]
		readonly get
		{
			return default(bool);
		}
		[Token(Token = "0x6000053")]
		[Address(RVA = "0xFA0680", Offset = "0xF9EC80", VA = "0x180FA0680")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001F")]
	public bool wantsMouseEnterLeaveWindow
	{
		[Token(Token = "0x6000054")]
		[Address(RVA = "0xADC3E0", Offset = "0xADA9E0", VA = "0x180ADC3E0")]
		[CompilerGenerated]
		readonly get
		{
			return default(bool);
		}
		[Token(Token = "0x6000055")]
		[Address(RVA = "0x1D69F20", Offset = "0x1D68520", VA = "0x181D69F20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000020")]
	public readonly bool wantsLessLayoutEvents
	{
		[Token(Token = "0x6000056")]
		[Address(RVA = "0x2F83560", Offset = "0x2F81B60", VA = "0x182F83560")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x2F83440", Offset = "0x2F81A40", VA = "0x182F83440")]
	public bool WantsEvent(EventType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x2F83460", Offset = "0x2F81A60", VA = "0x182F83460")]
	public bool WantsLayoutPass(EventType type)
	{
		return default(bool);
	}
}
