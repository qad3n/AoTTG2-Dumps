// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LowLevelPhysics2D.PhysicsBody
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.LowLevelPhysics2D;

[Token(Token = "0x200001E")]
public readonly struct PhysicsBody : IEquatable<PhysicsBody>
{
	[Token(Token = "0x200001F")]
	public enum BodyType
	{
		[Token(Token = "0x40000D5")]
		Dynamic,
		[Token(Token = "0x40000D6")]
		Kinematic,
		[Token(Token = "0x40000D7")]
		Static
	}

	[Token(Token = "0x2000020")]
	[Flags]
	public enum BodyConstraints
	{
		[Token(Token = "0x40000D9")]
		None = 0,
		[Token(Token = "0x40000DA")]
		PositionX = 1,
		[Token(Token = "0x40000DB")]
		PositionY = 2,
		[Token(Token = "0x40000DC")]
		Rotation = 4,
		[Token(Token = "0x40000DD")]
		Position = PositionX | PositionY,
		[Token(Token = "0x40000DE")]
		All = Position | Rotation
	}

	[Token(Token = "0x2000021")]
	public enum TransformWriteMode
	{
		[Token(Token = "0x40000E0")]
		Current,
		[Token(Token = "0x40000E1")]
		Interpolate,
		[Token(Token = "0x40000E2")]
		Extrapolate,
		[Token(Token = "0x40000E3")]
		Off
	}

	[Token(Token = "0x2000022")]
	public struct TransformWriteTween
	{
		[Token(Token = "0x40000E4")]
		[FieldOffset(Offset = "0x0")]
		private PhysicsBody m_Body;

		[Token(Token = "0x40000E5")]
		[FieldOffset(Offset = "0x8")]
		private TransformWriteMode m_TransformWriteMode;

		[Token(Token = "0x40000E6")]
		[FieldOffset(Offset = "0xC")]
		private PhysicsTransform m_PhysicsTransform;

		[Token(Token = "0x40000E7")]
		[FieldOffset(Offset = "0x1C")]
		private Vector2 m_LinearVelocity;

		[Token(Token = "0x40000E8")]
		[FieldOffset(Offset = "0x24")]
		private float m_AngularVelocity;

		[Token(Token = "0x40000E9")]
		[FieldOffset(Offset = "0x28")]
		private Vector3 m_PositionFrom;

		[Token(Token = "0x40000EA")]
		[FieldOffset(Offset = "0x34")]
		private Quaternion m_RotationFrom;

		[Token(Token = "0x1700002F")]
		public readonly PhysicsBody body
		{
			[Token(Token = "0x60000FD")]
			[Address(RVA = "0x69CD5E0", Offset = "0x69CC5E0", VA = "0x69CD5E0")]
			get
			{
				return default(PhysicsBody);
			}
		}

		[Token(Token = "0x17000030")]
		public readonly TransformWriteMode transformWriteMode
		{
			[Token(Token = "0x60000FE")]
			[Address(RVA = "0x69CD5F0", Offset = "0x69CC5F0", VA = "0x69CD5F0")]
			get
			{
				return default(TransformWriteMode);
			}
		}

		[Token(Token = "0x17000031")]
		public readonly PhysicsTransform physicsTransform
		{
			[Token(Token = "0x60000FF")]
			[Address(RVA = "0x69CD600", Offset = "0x69CC600", VA = "0x69CD600")]
			get
			{
				return default(PhysicsTransform);
			}
		}

		[Token(Token = "0x17000032")]
		public readonly Vector2 linearVelocity
		{
			[Token(Token = "0x6000100")]
			[Address(RVA = "0x69CD610", Offset = "0x69CC610", VA = "0x69CD610")]
			get
			{
				return default(Vector2);
			}
		}

		[Token(Token = "0x17000033")]
		public readonly float angularVelocity
		{
			[Token(Token = "0x6000101")]
			[Address(RVA = "0x69CD620", Offset = "0x69CC620", VA = "0x69CD620")]
			get
			{
				return default(float);
			}
		}

		[Token(Token = "0x17000034")]
		public Vector3 positionFrom
		{
			[Token(Token = "0x6000102")]
			[Address(RVA = "0x69CD630", Offset = "0x69CC630", VA = "0x69CD630")]
			readonly get
			{
				return default(Vector3);
			}
			[Token(Token = "0x6000103")]
			[Address(RVA = "0x69CD640", Offset = "0x69CC640", VA = "0x69CD640")]
			set
			{
			}
		}

		[Token(Token = "0x17000035")]
		public Quaternion rotationFrom
		{
			[Token(Token = "0x6000104")]
			[Address(RVA = "0x69CD650", Offset = "0x69CC650", VA = "0x69CD650")]
			readonly get
			{
				return default(Quaternion);
			}
			[Token(Token = "0x6000105")]
			[Address(RVA = "0x69CD660", Offset = "0x69CC660", VA = "0x69CD660")]
			set
			{
			}
		}
	}

	[Token(Token = "0x40000D1")]
	[FieldOffset(Offset = "0x0")]
	private readonly int m_Index1;

	[Token(Token = "0x40000D2")]
	[FieldOffset(Offset = "0x4")]
	private readonly ushort m_World0;

	[Token(Token = "0x40000D3")]
	[FieldOffset(Offset = "0x6")]
	private readonly ushort m_Generation;

	[Token(Token = "0x1700002C")]
	public bool isValid
	{
		[Token(Token = "0x60000FA")]
		[Address(RVA = "0x69CD420", Offset = "0x69CC420", VA = "0x69CD420")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002D")]
	public BodyType type
	{
		[Token(Token = "0x60000FB")]
		[Address(RVA = "0x69CD460", Offset = "0x69CC460", VA = "0x69CD460")]
		get
		{
			return default(BodyType);
		}
	}

	[Token(Token = "0x1700002E")]
	public object callbackTarget
	{
		[Token(Token = "0x60000FC")]
		[Address(RVA = "0x69CD5A0", Offset = "0x69CC5A0", VA = "0x69CD5A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x69CD190", Offset = "0x69CC190", VA = "0x69CD190", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x69CD4A0", Offset = "0x69CC4A0", VA = "0x69CD4A0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x69CD500", Offset = "0x69CC500", VA = "0x69CD500", Slot = "4")]
	public bool Equals(PhysicsBody other)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x69CD530", Offset = "0x69CC530", VA = "0x69CD530", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
