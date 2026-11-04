// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.InputEvent
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20001E0")]
public class InputEvent : EventBase<InputEvent>
{
	[Token(Token = "0x17000268")]
	protected string previousData
	{
		[Token(Token = "0x6000CF6")]
		[Address(RVA = "0xB48790", Offset = "0xB46D90", VA = "0x180B48790")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000269")]
	protected string newData
	{
		[Token(Token = "0x6000CF7")]
		[Address(RVA = "0xB48780", Offset = "0xB46D80", VA = "0x180B48780")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000CF5")]
	[Address(RVA = "0x3266730", Offset = "0x3264D30", VA = "0x183266730")]
	static InputEvent()
	{
	}

	[Token(Token = "0x6000CF8")]
	[Address(RVA = "0x3266680", Offset = "0x3264C80", VA = "0x183266680", Slot = "13")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6000CF9")]
	[Address(RVA = "0x32666F0", Offset = "0x3264CF0", VA = "0x1832666F0")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6000CFA")]
	[Address(RVA = "0x32665E0", Offset = "0x3264BE0", VA = "0x1832665E0")]
	public static InputEvent GetPooled(string previousData, string newData)
	{
		return null;
	}

	[Token(Token = "0x6000CFB")]
	[Address(RVA = "0x3266810", Offset = "0x3264E10", VA = "0x183266810")]
	public InputEvent()
	{
	}
}
