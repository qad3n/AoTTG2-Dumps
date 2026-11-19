// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.InputForUI.NavigationEvent
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

[Token(Token = "0x2000015")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
internal struct NavigationEvent : IEventProperties
{
	[Token(Token = "0x2000016")]
	public enum Type
	{
		[Token(Token = "0x400006E")]
		Move = 1,
		[Token(Token = "0x400006F")]
		Submit,
		[Token(Token = "0x4000070")]
		Cancel
	}

	[Token(Token = "0x2000017")]
	public enum Direction
	{
		[Token(Token = "0x4000072")]
		None,
		[Token(Token = "0x4000073")]
		Left,
		[Token(Token = "0x4000074")]
		Up,
		[Token(Token = "0x4000075")]
		Right,
		[Token(Token = "0x4000076")]
		Down,
		[Token(Token = "0x4000077")]
		Next,
		[Token(Token = "0x4000078")]
		Previous
	}

	[Token(Token = "0x4000066")]
	[FieldOffset(Offset = "0x0")]
	public Type type;

	[Token(Token = "0x4000067")]
	[FieldOffset(Offset = "0x4")]
	public Direction direction;

	[Token(Token = "0x4000068")]
	[FieldOffset(Offset = "0x8")]
	public bool shouldBeUsed;

	[Token(Token = "0x17000022")]
	public DiscreteTime timestamp
	{
		[Token(Token = "0x600004E")]
		[Address(RVA = "0x69B56A0", Offset = "0x69B46A0", VA = "0x69B56A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000023")]
	public EventSource eventSource
	{
		[Token(Token = "0x600004F")]
		[Address(RVA = "0x69B56B0", Offset = "0x69B46B0", VA = "0x69B56B0", Slot = "4")]
		[CompilerGenerated]
		readonly get
		{
			return default(EventSource);
		}
		[Token(Token = "0x6000050")]
		[Address(RVA = "0x69B56C0", Offset = "0x69B46C0", VA = "0x69B56C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000024")]
	public uint playerId
	{
		[Token(Token = "0x6000051")]
		[Address(RVA = "0x69B56D0", Offset = "0x69B46D0", VA = "0x69B56D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000025")]
	public EventModifiers eventModifiers
	{
		[Token(Token = "0x6000052")]
		[Address(RVA = "0x69B56E0", Offset = "0x69B46E0", VA = "0x69B56E0", Slot = "5")]
		[CompilerGenerated]
		readonly get
		{
			return default(EventModifiers);
		}
		[Token(Token = "0x6000053")]
		[Address(RVA = "0x69B56F0", Offset = "0x69B46F0", VA = "0x69B56F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x69B5700", Offset = "0x69B4700", VA = "0x69B5700", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x69B5840", Offset = "0x69B4840", VA = "0x69B5840")]
	internal static Direction DetermineMoveDirection(Vector2 vec, float deadZone = 0.6f)
	{
		return default(Direction);
	}
}
