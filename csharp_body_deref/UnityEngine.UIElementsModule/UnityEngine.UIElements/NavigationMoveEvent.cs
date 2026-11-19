// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.NavigationMoveEvent
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200020B")]
public class NavigationMoveEvent : NavigationEventBase<NavigationMoveEvent>
{
	[Token(Token = "0x200020C")]
	public enum Direction
	{
		[Token(Token = "0x40007F9")]
		None,
		[Token(Token = "0x40007FA")]
		Left,
		[Token(Token = "0x40007FB")]
		Up,
		[Token(Token = "0x40007FC")]
		Right,
		[Token(Token = "0x40007FD")]
		Down,
		[Token(Token = "0x40007FE")]
		Next,
		[Token(Token = "0x40007FF")]
		Previous
	}

	[Token(Token = "0x1700029B")]
	public Direction direction
	{
		[Token(Token = "0x6000DDF")]
		[Address(RVA = "0x6C6B670", Offset = "0x6C6A670", VA = "0x6C6B670")]
		[CompilerGenerated]
		get
		{
			return default(Direction);
		}
		[Token(Token = "0x6000DE0")]
		[Address(RVA = "0x6C6B680", Offset = "0x6C6A680", VA = "0x6C6B680")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700029C")]
	private Vector2 move
	{
		[Token(Token = "0x6000DE1")]
		[Address(RVA = "0x6C6B690", Offset = "0x6C6A690", VA = "0x6C6B690")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000DDD")]
	[Address(RVA = "0x6C6B540", Offset = "0x6C6A540", VA = "0x6C6B540")]
	static NavigationMoveEvent()
	{
	}

	[Token(Token = "0x6000DDE")]
	[Address(RVA = "0x6C6B610", Offset = "0x6C6A610", VA = "0x6C6B610")]
	internal static Direction DetermineMoveDirection(float x, float y, float deadZone = 0.6f)
	{
		return default(Direction);
	}

	[Token(Token = "0x6000DE2")]
	[Address(RVA = "0x6C678C0", Offset = "0x6C668C0", VA = "0x6C678C0")]
	internal static NavigationMoveEvent GetPooled(Vector2 moveVector, NavigationDeviceType deviceType, EventModifiers modifiers = EventModifiers.None)
	{
		return null;
	}

	[Token(Token = "0x6000DE3")]
	[Address(RVA = "0x6C6B6A0", Offset = "0x6C6A6A0", VA = "0x6C6B6A0")]
	public static NavigationMoveEvent GetPooled(Direction direction, EventModifiers modifiers = EventModifiers.None)
	{
		return null;
	}

	[Token(Token = "0x6000DE4")]
	[Address(RVA = "0x6C67830", Offset = "0x6C66830", VA = "0x6C67830")]
	internal static NavigationMoveEvent GetPooled(Direction direction, NavigationDeviceType deviceType, EventModifiers modifiers = EventModifiers.None)
	{
		return null;
	}

	[Token(Token = "0x6000DE5")]
	[Address(RVA = "0x6C6B730", Offset = "0x6C6A730", VA = "0x6C6B730", Slot = "13")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6000DE6")]
	[Address(RVA = "0x6C6B800", Offset = "0x6C6A800", VA = "0x6C6B800")]
	public NavigationMoveEvent()
	{
	}

	[Token(Token = "0x6000DE7")]
	[Address(RVA = "0x6C6B7B0", Offset = "0x6C6A7B0", VA = "0x6C6B7B0")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6000DE8")]
	[Address(RVA = "0x6C6B880", Offset = "0x6C6A880", VA = "0x6C6B880", Slot = "9")]
	protected internal override void PostDispatch(IPanel panel)
	{
	}
}
