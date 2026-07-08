using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000005")]
[UnityEngine.Bindings.NativeHeader("Runtime/Input/InputBindings.h")]
public struct Touch
{
	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x0")]
	private int m_FingerId;

	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x4")]
	private Vector2 m_Position;

	[Token(Token = "0x4000011")]
	[FieldOffset(Offset = "0xC")]
	private Vector2 m_RawPosition;

	[Token(Token = "0x4000012")]
	[FieldOffset(Offset = "0x14")]
	private Vector2 m_PositionDelta;

	[Token(Token = "0x4000013")]
	[FieldOffset(Offset = "0x1C")]
	private float m_TimeDelta;

	[Token(Token = "0x4000014")]
	[FieldOffset(Offset = "0x20")]
	private int m_TapCount;

	[Token(Token = "0x4000015")]
	[FieldOffset(Offset = "0x24")]
	private TouchPhase m_Phase;

	[Token(Token = "0x4000016")]
	[FieldOffset(Offset = "0x28")]
	private TouchType m_Type;

	[Token(Token = "0x4000017")]
	[FieldOffset(Offset = "0x2C")]
	private float m_Pressure;

	[Token(Token = "0x4000018")]
	[FieldOffset(Offset = "0x30")]
	private float m_maximumPossiblePressure;

	[Token(Token = "0x4000019")]
	[FieldOffset(Offset = "0x34")]
	private float m_Radius;

	[Token(Token = "0x400001A")]
	[FieldOffset(Offset = "0x38")]
	private float m_RadiusVariance;

	[Token(Token = "0x400001B")]
	[FieldOffset(Offset = "0x3C")]
	private float m_AltitudeAngle;

	[Token(Token = "0x400001C")]
	[FieldOffset(Offset = "0x40")]
	private float m_AzimuthAngle;

	[Token(Token = "0x17000001")]
	public int fingerId
	{
		[Token(Token = "0x6000001")]
		[Address(RVA = "0x4B47430", Offset = "0x4B47430", VA = "0x4B47430")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000002")]
	public Vector2 position
	{
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x4B47440", Offset = "0x4B47440", VA = "0x4B47440")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x4B47450", Offset = "0x4B47450", VA = "0x4B47450")]
		set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public Vector2 rawPosition
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x4B47460", Offset = "0x4B47460", VA = "0x4B47460")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x4B47470", Offset = "0x4B47470", VA = "0x4B47470")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public Vector2 deltaPosition
	{
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x4B47480", Offset = "0x4B47480", VA = "0x4B47480")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x4B47490", Offset = "0x4B47490", VA = "0x4B47490")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public float deltaTime
	{
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x4B474A0", Offset = "0x4B474A0", VA = "0x4B474A0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000006")]
	public int tapCount
	{
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x4B474B0", Offset = "0x4B474B0", VA = "0x4B474B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000007")]
	public TouchPhase phase
	{
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x4B474C0", Offset = "0x4B474C0", VA = "0x4B474C0")]
		get
		{
			return default(TouchPhase);
		}
	}

	[Token(Token = "0x17000008")]
	public float pressure
	{
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x4B474D0", Offset = "0x4B474D0", VA = "0x4B474D0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000009")]
	public float maximumPossiblePressure
	{
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x4B474E0", Offset = "0x4B474E0", VA = "0x4B474E0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700000A")]
	public TouchType type
	{
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x4B474F0", Offset = "0x4B474F0", VA = "0x4B474F0")]
		get
		{
			return default(TouchType);
		}
	}

	[Token(Token = "0x1700000B")]
	public float altitudeAngle
	{
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x4B47500", Offset = "0x4B47500", VA = "0x4B47500")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700000C")]
	public float azimuthAngle
	{
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x4B47510", Offset = "0x4B47510", VA = "0x4B47510")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700000D")]
	public float radius
	{
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x4B47520", Offset = "0x4B47520", VA = "0x4B47520")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700000E")]
	public float radiusVariance
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x4B47530", Offset = "0x4B47530", VA = "0x4B47530")]
		get
		{
			return default(float);
		}
	}
}
