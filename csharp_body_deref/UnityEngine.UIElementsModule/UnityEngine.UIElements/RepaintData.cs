using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000239")]
internal class RepaintData
{
	[Token(Token = "0x4000821")]
	[FieldOffset(Offset = "0x50")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Vector2 _003CmousePosition_003Ek__BackingField;

	[Token(Token = "0x170002A7")]
	public Matrix4x4 currentOffset
	{
		[Token(Token = "0x6000E43")]
		[Address(RVA = "0x4D26240", Offset = "0x4D26240", VA = "0x4D26240")]
		[CompilerGenerated]
		get
		{
			return default(Matrix4x4);
		}
	}

	[Token(Token = "0x170002A8")]
	public Rect currentWorldClip
	{
		[Token(Token = "0x6000E44")]
		[Address(RVA = "0x4D26270", Offset = "0x4D26270", VA = "0x4D26270")]
		[CompilerGenerated]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x170002A9")]
	public Event repaintEvent
	{
		[Token(Token = "0x6000E45")]
		[Address(RVA = "0x4D26280", Offset = "0x4D26280", VA = "0x4D26280")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E46")]
		[Address(RVA = "0x4D26290", Offset = "0x4D26290", VA = "0x4D26290")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000E47")]
	[Address(RVA = "0x4D262A0", Offset = "0x4D262A0", VA = "0x4D262A0")]
	public RepaintData()
	{
	}
}
