// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.InputForUI.IMECompositionEvent
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IntegerTime;
using UnityEngine.Bindings;

namespace UnityEngine.InputForUI;

[Token(Token = "0x200000F")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
internal struct IMECompositionEvent : IEventProperties
{
	[Token(Token = "0x400004D")]
	[FieldOffset(Offset = "0x0")]
	public string compositionString;

	[Token(Token = "0x17000018")]
	public DiscreteTime timestamp
	{
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x69B4F90", Offset = "0x69B3F90", VA = "0x69B4F90")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000019")]
	public EventSource eventSource
	{
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x69B4FA0", Offset = "0x69B3FA0", VA = "0x69B4FA0", Slot = "4")]
		[CompilerGenerated]
		readonly get
		{
			return default(EventSource);
		}
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x69B4FB0", Offset = "0x69B3FB0", VA = "0x69B4FB0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001A")]
	public uint playerId
	{
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x69B4FC0", Offset = "0x69B3FC0", VA = "0x69B4FC0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001B")]
	public EventModifiers eventModifiers
	{
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x69B4FD0", Offset = "0x69B3FD0", VA = "0x69B4FD0", Slot = "5")]
		[CompilerGenerated]
		readonly get
		{
			return default(EventModifiers);
		}
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x69B4FE0", Offset = "0x69B3FE0", VA = "0x69B4FE0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x69B4FF0", Offset = "0x69B3FF0", VA = "0x69B4FF0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
