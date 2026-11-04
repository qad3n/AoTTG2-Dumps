// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.IMEEvent
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20001DE")]
[EventCategory(EventCategory.Keyboard)]
internal class IMEEvent : EventBase<IMEEvent>
{
	[Token(Token = "0x17000267")]
	protected string compositionString
	{
		[Token(Token = "0x6000CEC")]
		[Address(RVA = "0xB48790", Offset = "0xB46D90", VA = "0x180B48790")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000CED")]
	[Address(RVA = "0x32661C0", Offset = "0x32647C0", VA = "0x1832661C0")]
	static IMEEvent()
	{
	}

	[Token(Token = "0x6000CEE")]
	[Address(RVA = "0x32660B0", Offset = "0x32646B0", VA = "0x1832660B0")]
	public static IMEEvent GetPooled(string compositionString)
	{
		return null;
	}

	[Token(Token = "0x6000CEF")]
	[Address(RVA = "0x3266140", Offset = "0x3264740", VA = "0x183266140", Slot = "13")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6000CF0")]
	[Address(RVA = "0x32661A0", Offset = "0x32647A0", VA = "0x1832661A0")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6000CF1")]
	[Address(RVA = "0x32662A0", Offset = "0x32648A0", VA = "0x1832662A0")]
	public IMEEvent()
	{
	}
}
