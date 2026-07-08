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
		[Address(RVA = "0x4D0E5C0", Offset = "0x4D0E5C0", VA = "0x4D0E5C0")]
		[CompilerGenerated]
		get
		{
			return default(Direction);
		}
		[Token(Token = "0x6000BBF")]
		[Address(RVA = "0x4D0E5D0", Offset = "0x4D0E5D0", VA = "0x4D0E5D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700021C")]
	private Vector2 move
	{
		[Token(Token = "0x6000BC0")]
		[Address(RVA = "0x4D0E5E0", Offset = "0x4D0E5E0", VA = "0x4D0E5E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000BBC")]
	[Address(RVA = "0x4D0E490", Offset = "0x4D0E490", VA = "0x4D0E490")]
	static NavigationMoveEvent()
	{
	}

	[Token(Token = "0x6000BBD")]
	[Address(RVA = "0x4D0E560", Offset = "0x4D0E560", VA = "0x4D0E560")]
	internal static Direction DetermineMoveDirection(float x, float y, float deadZone = 0.6f)
	{
		return default(Direction);
	}

	[Token(Token = "0x6000BC1")]
	[Address(RVA = "0x4D0E5F0", Offset = "0x4D0E5F0", VA = "0x4D0E5F0")]
	public static NavigationMoveEvent GetPooled(Vector2 moveVector, EventModifiers modifiers = EventModifiers.None)
	{
		return null;
	}

	[Token(Token = "0x6000BC2")]
	[Address(RVA = "0x4D0A430", Offset = "0x4D0A430", VA = "0x4D0A430")]
	internal static NavigationMoveEvent GetPooled(Vector2 moveVector, NavigationDeviceType deviceType, EventModifiers modifiers = EventModifiers.None)
	{
		return null;
	}

	[Token(Token = "0x6000BC3")]
	[Address(RVA = "0x4D0E6F0", Offset = "0x4D0E6F0", VA = "0x4D0E6F0")]
	public static NavigationMoveEvent GetPooled(Direction direction, EventModifiers modifiers = EventModifiers.None)
	{
		return null;
	}

	[Token(Token = "0x6000BC4")]
	[Address(RVA = "0x4D0A3A0", Offset = "0x4D0A3A0", VA = "0x4D0A3A0")]
	internal static NavigationMoveEvent GetPooled(Direction direction, NavigationDeviceType deviceType, EventModifiers modifiers = EventModifiers.None)
	{
		return null;
	}

	[Token(Token = "0x6000BC5")]
	[Address(RVA = "0x4D0E780", Offset = "0x4D0E780", VA = "0x4D0E780", Slot = "13")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6000BC6")]
	[Address(RVA = "0x4D0E840", Offset = "0x4D0E840", VA = "0x4D0E840")]
	public NavigationMoveEvent()
	{
	}

	[Token(Token = "0x6000BC7")]
	[Address(RVA = "0x4D0E7F0", Offset = "0x4D0E7F0", VA = "0x4D0E7F0")]
	private void LocalInit()
	{
	}
}
