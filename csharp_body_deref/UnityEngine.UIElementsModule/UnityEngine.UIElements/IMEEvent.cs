// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.IMEEvent
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6C66530", Offset = "0x6C65530", VA = "0x6C66530")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000CED")]
	[Address(RVA = "0x6C66540", Offset = "0x6C65540", VA = "0x6C66540")]
	static IMEEvent()
	{
	}

	[Token(Token = "0x6000CEE")]
	[Address(RVA = "0x6C66610", Offset = "0x6C65610", VA = "0x6C66610")]
	public static IMEEvent GetPooled(string compositionString)
	{
		return null;
	}

	[Token(Token = "0x6000CEF")]
	[Address(RVA = "0x6C666A0", Offset = "0x6C656A0", VA = "0x6C666A0", Slot = "13")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6000CF0")]
	[Address(RVA = "0x6C666F0", Offset = "0x6C656F0", VA = "0x6C666F0")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6000CF1")]
	[Address(RVA = "0x6C66710", Offset = "0x6C65710", VA = "0x6C66710")]
	public IMEEvent()
	{
	}
}
