// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.InputForUI.IMECompositionEvent
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
		[Address(RVA = "0x1B943D0", Offset = "0x1B929D0", VA = "0x181B943D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000019")]
	public EventSource eventSource
	{
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860", Slot = "4")]
		[CompilerGenerated]
		readonly get
		{
			return default(EventSource);
		}
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001A")]
	public uint playerId
	{
		[Token(Token = "0x6000032")]
		[Address(RVA = "0xD23EE0", Offset = "0xD224E0", VA = "0x180D23EE0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001B")]
	public EventModifiers eventModifiers
	{
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390", Slot = "5")]
		[CompilerGenerated]
		readonly get
		{
			return default(EventModifiers);
		}
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x111C9C0", Offset = "0x111AFC0", VA = "0x18111C9C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x2FBC6F0", Offset = "0x2FBACF0", VA = "0x182FBC6F0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
