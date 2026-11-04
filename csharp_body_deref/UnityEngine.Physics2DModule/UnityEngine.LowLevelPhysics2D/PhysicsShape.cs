// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LowLevelPhysics2D.PhysicsShape
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Serialization;

namespace UnityEngine.LowLevelPhysics2D;

[Token(Token = "0x2000050")]
public readonly struct PhysicsShape : IEquatable<PhysicsShape>
{
	[Serializable]
	[Token(Token = "0x2000051")]
	public struct SurfaceMaterial
	{
		[Token(Token = "0x2000052")]
		public enum MixingMode
		{
			[Token(Token = "0x40001D1")]
			Average,
			[Token(Token = "0x40001D2")]
			Mean,
			[Token(Token = "0x40001D3")]
			Multiply,
			[Token(Token = "0x40001D4")]
			Minimum,
			[Token(Token = "0x40001D5")]
			Maximum
		}

		[Token(Token = "0x40001C7")]
		[FieldOffset(Offset = "0x0")]
		[Min(0f)]
		[SerializeField]
		private float m_Friction;

		[Token(Token = "0x40001C8")]
		[FieldOffset(Offset = "0x4")]
		[SerializeField]
		[Min(0f)]
		private float m_Bounciness;

		[Token(Token = "0x40001C9")]
		[FieldOffset(Offset = "0x8")]
		[SerializeField]
		[FormerlySerializedAs("m_FrictionCombine")]
		private MixingMode m_FrictionMixing;

		[Token(Token = "0x40001CA")]
		[FieldOffset(Offset = "0xC")]
		[SerializeField]
		[FormerlySerializedAs("m_BouncinessCombine")]
		private MixingMode m_BouncinessMixing;

		[Token(Token = "0x40001CB")]
		[FieldOffset(Offset = "0x10")]
		[Range(0f, 65535f)]
		[SerializeField]
		private ushort m_FrictionPriority;

		[Token(Token = "0x40001CC")]
		[FieldOffset(Offset = "0x12")]
		[SerializeField]
		[Range(0f, 65535f)]
		private ushort m_BouncinessPriority;

		[Token(Token = "0x40001CD")]
		[FieldOffset(Offset = "0x14")]
		[Min(0f)]
		[SerializeField]
		private float m_RollingResistance;

		[Token(Token = "0x40001CE")]
		[FieldOffset(Offset = "0x18")]
		[SerializeField]
		private float m_TangentSpeed;

		[Token(Token = "0x40001CF")]
		[FieldOffset(Offset = "0x1C")]
		[SerializeField]
		private Color32 m_CustomColor;

		[Token(Token = "0x17000070")]
		public static SurfaceMaterial Default
		{
			[Token(Token = "0x6000179")]
			[Address(RVA = "0x2FDB150", Offset = "0x2FD9750", VA = "0x182FDB150")]
			get
			{
				return default(SurfaceMaterial);
			}
		}

		[Token(Token = "0x6000178")]
		[Address(RVA = "0x2FDB0F0", Offset = "0x2FD96F0", VA = "0x182FDB0F0")]
		public SurfaceMaterial()
		{
		}
	}

	[Token(Token = "0x2000053")]
	public enum ShapeType
	{
		[Token(Token = "0x40001D7")]
		Circle,
		[Token(Token = "0x40001D8")]
		Capsule,
		[Token(Token = "0x40001D9")]
		Segment,
		[Token(Token = "0x40001DA")]
		Polygon,
		[Token(Token = "0x40001DB")]
		ChainSegment
	}

	[Token(Token = "0x2000054")]
	public readonly struct ContactId
	{
		[Token(Token = "0x40001DC")]
		[FieldOffset(Offset = "0x0")]
		private readonly int m_IndexId;

		[Token(Token = "0x40001DD")]
		[FieldOffset(Offset = "0x4")]
		private readonly ushort m_WorldId;

		[Token(Token = "0x40001DE")]
		[FieldOffset(Offset = "0x6")]
		private readonly ushort m_Padding;

		[Token(Token = "0x40001DF")]
		[FieldOffset(Offset = "0x8")]
		private readonly int m_GenerationId;

		[Token(Token = "0x17000071")]
		public bool isValid
		{
			[Token(Token = "0x600017B")]
			[Address(RVA = "0x2FCE170", Offset = "0x2FCC770", VA = "0x182FCE170")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600017A")]
		[Address(RVA = "0x2FCE060", Offset = "0x2FCC660", VA = "0x182FCE060", Slot = "3")]
		public override string ToString()
		{
			return null;
		}
	}

	[Serializable]
	[Token(Token = "0x2000055")]
	public struct ContactFilter
	{
		[Token(Token = "0x40001E0")]
		[FieldOffset(Offset = "0x0")]
		public static PhysicsMask DefaultCategories;

		[Token(Token = "0x40001E1")]
		[FieldOffset(Offset = "0x8")]
		public static PhysicsMask DefaultContacts;

		[Token(Token = "0x40001E2")]
		[FieldOffset(Offset = "0x10")]
		public static ContactFilter Everything;

		[Token(Token = "0x40001E3")]
		[FieldOffset(Offset = "0x28")]
		public static ContactFilter defaultFilter;

		[Token(Token = "0x40001E4")]
		[FieldOffset(Offset = "0x0")]
		[SerializeField]
		internal PhysicsMask m_Categories;

		[Token(Token = "0x40001E5")]
		[FieldOffset(Offset = "0x8")]
		[SerializeField]
		internal PhysicsMask m_Contacts;

		[Token(Token = "0x40001E6")]
		[FieldOffset(Offset = "0x10")]
		[SerializeField]
		internal int m_GroupIndex;

		[Token(Token = "0x600017C")]
		[Address(RVA = "0x2FCE050", Offset = "0x2FCC650", VA = "0x182FCE050")]
		public ContactFilter(PhysicsMask categories, PhysicsMask contacts, int groupIndex = 0)
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000056")]
	public struct MoverData
	{
		[Token(Token = "0x40001E7")]
		[FieldOffset(Offset = "0x0")]
		[SerializeField]
		[Min(0f)]
		private float m_PushLimit;

		[Token(Token = "0x40001E8")]
		[FieldOffset(Offset = "0x4")]
		[SerializeField]
		private bool m_ClipVelocity;

		[Token(Token = "0x600017E")]
		[Address(RVA = "0x2FCF8B0", Offset = "0x2FCDEB0", VA = "0x182FCF8B0")]
		public MoverData()
		{
		}
	}

	[Token(Token = "0x40001C4")]
	[FieldOffset(Offset = "0x0")]
	private readonly int m_Index1;

	[Token(Token = "0x40001C5")]
	[FieldOffset(Offset = "0x4")]
	private readonly ushort m_World0;

	[Token(Token = "0x40001C6")]
	[FieldOffset(Offset = "0x6")]
	private readonly ushort m_Generation;

	[Token(Token = "0x1700006D")]
	public bool isValid
	{
		[Token(Token = "0x6000175")]
		[Address(RVA = "0x2FD7700", Offset = "0x2FD5D00", VA = "0x182FD7700")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006E")]
	public ShapeType shapeType
	{
		[Token(Token = "0x6000176")]
		[Address(RVA = "0x2FD7740", Offset = "0x2FD5D40", VA = "0x182FD7740")]
		get
		{
			return default(ShapeType);
		}
	}

	[Token(Token = "0x1700006F")]
	public object callbackTarget
	{
		[Token(Token = "0x6000177")]
		[Address(RVA = "0x2FD76C0", Offset = "0x2FD5CC0", VA = "0x182FD76C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x2FD7410", Offset = "0x2FD5A10", VA = "0x182FD7410", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x2FD7330", Offset = "0x2FD5930", VA = "0x182FD7330", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000173")]
	[Address(RVA = "0x2FD0FA0", Offset = "0x2FCF5A0", VA = "0x182FD0FA0", Slot = "4")]
	public bool Equals(PhysicsShape other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x2FD7390", Offset = "0x2FD5990", VA = "0x182FD7390", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
