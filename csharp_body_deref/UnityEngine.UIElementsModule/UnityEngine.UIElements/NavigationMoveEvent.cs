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

[Token(Token = "0x20001C4")]
public class NavigationMoveEvent : NavigationEventBase<NavigationMoveEvent>
{
	[Token(Token = "0x20001C5")]
	public enum Direction
	{
		[Token(Token = "0x40006BE")]
		None,
		[Token(Token = "0x40006BF")]
		Left,
		[Token(Token = "0x40006C0")]
		Up,
		[Token(Token = "0x40006C1")]
		Right,
		[Token(Token = "0x40006C2")]
		Down,
		[Token(Token = "0x40006C3")]
		Next,
		[Token(Token = "0x40006C4")]
		Previous
	}

	[Token(Token = "0x1700021B")]
	public Direction direction
	{
		[Token(Token = "0x6000BBE")]
		[Address(RVA = "0x5035EF0", Offset = "0x5035EF0", VA = "0x5035EF0")]
		[CompilerGenerated]
		get
		{
			return default(Direction);
		}
		[Token(Token = "0x6000BBF")]
		[Address(RVA = "0x5035F00", Offset = "0x5035F00", VA = "0x5035F00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700021C")]
	private Vector2 move
	{
		[Token(Token = "0x6000BC0")]
		[Address(RVA = "0x5035F10", Offset = "0x5035F10", VA = "0x5035F10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000BBC")]
	[Address(RVA = "0x5035DC0", Offset = "0x5035DC0", VA = "0x5035DC0")]
	static NavigationMoveEvent()
	{
	}

	[Token(Token = "0x6000BBD")]
	[Address(RVA = "0x5035E90", Offset = "0x5035E90", VA = "0x5035E90")]
	internal static Direction DetermineMoveDirection(float x, float y, float deadZone = 0.6f)
	{
		return default(Direction);
	}

	[Token(Token = "0x6000BC1")]
	[Address(RVA = "0x5035F20", Offset = "0x5035F20", VA = "0x5035F20")]
	public static NavigationMoveEvent GetPooled(Vector2 moveVector, EventModifiers modifiers = EventModifiers.None)
	{
		return null;
	}

	[Token(Token = "0x6000BC2")]
	[Address(RVA = "0x5031D60", Offset = "0x5031D60", VA = "0x5031D60")]
	internal static NavigationMoveEvent GetPooled(Vector2 moveVector, NavigationDeviceType deviceType, EventModifiers modifiers = EventModifiers.None)
	{
		return null;
	}

	[Token(Token = "0x6000BC3")]
	[Address(RVA = "0x5036020", Offset = "0x5036020", VA = "0x5036020")]
	public static NavigationMoveEvent GetPooled(Direction direction, EventModifiers modifiers = EventModifiers.None)
	{
		return null;
	}

	[Token(Token = "0x6000BC4")]
	[Address(RVA = "0x5031CD0", Offset = "0x5031CD0", VA = "0x5031CD0")]
	internal static NavigationMoveEvent GetPooled(Direction direction, NavigationDeviceType deviceType, EventModifiers modifiers = EventModifiers.None)
	{
		return null;
	}

	[Token(Token = "0x6000BC5")]
	[Address(RVA = "0x50360B0", Offset = "0x50360B0", VA = "0x50360B0", Slot = "13")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6000BC6")]
	[Address(RVA = "0x5036170", Offset = "0x5036170", VA = "0x5036170")]
	public NavigationMoveEvent()
	{
	}

	[Token(Token = "0x6000BC7")]
	[Address(RVA = "0x5036120", Offset = "0x5036120", VA = "0x5036120")]
	private void LocalInit()
	{
	}
}
