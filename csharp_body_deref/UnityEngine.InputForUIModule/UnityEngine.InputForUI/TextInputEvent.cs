// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.InputForUI.TextInputEvent
// Update status: NEW in this game update
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
		[Address(RVA = "0x1B943D0", Offset = "0x1B929D0", VA = "0x181B943D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700002F")]
	public EventSource eventSource
	{
		[Token(Token = "0x6000068")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860", Slot = "4")]
		[CompilerGenerated]
		readonly get
		{
			return default(EventSource);
		}
		[Token(Token = "0x6000069")]
		[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000030")]
	public uint playerId
	{
		[Token(Token = "0x600006A")]
		[Address(RVA = "0xD23EE0", Offset = "0xD224E0", VA = "0x180D23EE0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000031")]
	public EventModifiers eventModifiers
	{
		[Token(Token = "0x600006B")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390", Slot = "5")]
		[CompilerGenerated]
		readonly get
		{
			return default(EventModifiers);
		}
		[Token(Token = "0x600006C")]
		[Address(RVA = "0x111C9C0", Offset = "0x111AFC0", VA = "0x18111C9C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x2FC3090", Offset = "0x2FC1690", VA = "0x182FC3090", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
