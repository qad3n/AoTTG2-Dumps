// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.InputForUI.TextInputEvent
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

[Token(Token = "0x200001C")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
internal struct TextInputEvent : IEventProperties
{
	[Token(Token = "0x40000A2")]
	[FieldOffset(Offset = "0x0")]
	public char character;

	[Token(Token = "0x1700002E")]
	public DiscreteTime timestamp
	{
		[Token(Token = "0x6000067")]
		[Address(RVA = "0x69B6BA0", Offset = "0x69B5BA0", VA = "0x69B6BA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700002F")]
	public EventSource eventSource
	{
		[Token(Token = "0x6000068")]
		[Address(RVA = "0x69B6BB0", Offset = "0x69B5BB0", VA = "0x69B6BB0", Slot = "4")]
		[CompilerGenerated]
		readonly get
		{
			return default(EventSource);
		}
		[Token(Token = "0x6000069")]
		[Address(RVA = "0x69B6BC0", Offset = "0x69B5BC0", VA = "0x69B6BC0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000030")]
	public uint playerId
	{
		[Token(Token = "0x600006A")]
		[Address(RVA = "0x69B6BD0", Offset = "0x69B5BD0", VA = "0x69B6BD0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000031")]
	public EventModifiers eventModifiers
	{
		[Token(Token = "0x600006B")]
		[Address(RVA = "0x69B6BE0", Offset = "0x69B5BE0", VA = "0x69B6BE0", Slot = "5")]
		[CompilerGenerated]
		readonly get
		{
			return default(EventModifiers);
		}
		[Token(Token = "0x600006C")]
		[Address(RVA = "0x69B6BF0", Offset = "0x69B5BF0", VA = "0x69B6BF0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x69B6C00", Offset = "0x69B5C00", VA = "0x69B6C00", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
