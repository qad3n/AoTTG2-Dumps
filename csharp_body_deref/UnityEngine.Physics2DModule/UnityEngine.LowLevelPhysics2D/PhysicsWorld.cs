// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LowLevelPhysics2D.PhysicsWorld
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Reflection;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.LowLevelPhysics2D;

[Token(Token = "0x2000040")]
public readonly struct PhysicsWorld : IEquatable<PhysicsWorld>
{
	[Token(Token = "0x2000041")]
	public enum SimulationType
	{
		[Token(Token = "0x4000129")]
		FixedUpdate,
		[Token(Token = "0x400012A")]
		Update,
		[Token(Token = "0x400012B")]
		Script
	}

	[Token(Token = "0x2000042")]
	public enum TransformWriteMode
	{
		[Token(Token = "0x400012D")]
		Off,
		[Token(Token = "0x400012E")]
		Fast2D,
		[Token(Token = "0x400012F")]
		Slow3D
	}

	[Token(Token = "0x2000043")]
	public enum TransformPlane
	{
		[Token(Token = "0x4000131")]
		XY,
		[Token(Token = "0x4000132")]
		XZ,
		[Token(Token = "0x4000133")]
		ZY
	}

	[Token(Token = "0x2000044")]
	public enum DrawContactType
	{
		[Token(Token = "0x4000135")]
		Point = 1,
		[Token(Token = "0x4000136")]
		AnchorA,
		[Token(Token = "0x4000137")]
		AnchorB,
		[Token(Token = "0x4000138")]
		Average
	}

	[Token(Token = "0x2000045")]
	[Flags]
	public enum DrawOptions
	{
		[Token(Token = "0x400013A")]
		Off = 0,
		[Token(Token = "0x400013B")]
		SelectedBodies = 1,
		[Token(Token = "0x400013C")]
		SelectedShapes = 2,
		[Token(Token = "0x400013D")]
		SelectedShapeBounds = 4,
		[Token(Token = "0x400013E")]
		SelectedJoints = 8,
		[Token(Token = "0x400013F")]
		AllBodies = 0x10,
		[Token(Token = "0x4000140")]
		AllShapes = 0x20,
		[Token(Token = "0x4000141")]
		AllShapeBounds = 0x40,
		[Token(Token = "0x4000142")]
		AllJoints = 0x80,
		[Token(Token = "0x4000143")]
		AllContactPoints = 0x100,
		[Token(Token = "0x4000144")]
		AllContactNormal = 0x200,
		[Token(Token = "0x4000145")]
		AllContactImpulse = 0x400,
		[Token(Token = "0x4000146")]
		AllContactFriction = 0x800,
		[Token(Token = "0x4000147")]
		AllCustom = 0x1000,
		[Token(Token = "0x4000148")]
		AllSolverIslands = 0x2000,
		[Token(Token = "0x4000149")]
		DefaultAll = AllShapes | AllJoints | AllCustom,
		[Token(Token = "0x400014A")]
		DefaultSelected = SelectedShapes | SelectedJoints | AllCustom
	}

	[Token(Token = "0x2000046")]
	[Flags]
	public enum DrawFillOptions
	{
		[Token(Token = "0x400014C")]
		Interior = 1,
		[Token(Token = "0x400014D")]
		Outline = 2,
		[Token(Token = "0x400014E")]
		Orientation = 4,
		[Token(Token = "0x400014F")]
		All = Interior | Outline | Orientation
	}

	[Token(Token = "0x2000047")]
	internal readonly struct DrawResults
	{
		[Token(Token = "0x2000048")]
		public readonly struct PolygonGeometryElement
		{
			[Token(Token = "0x4000155")]
			[FieldOffset(Offset = "0x0")]
			public readonly PhysicsTransform transform;

			[Token(Token = "0x4000156")]
			[FieldOffset(Offset = "0x10")]
			public readonly Vector2 p0;

			[Token(Token = "0x4000157")]
			[FieldOffset(Offset = "0x18")]
			public readonly Vector2 p1;

			[Token(Token = "0x4000158")]
			[FieldOffset(Offset = "0x20")]
			public readonly Vector2 p2;

			[Token(Token = "0x4000159")]
			[FieldOffset(Offset = "0x28")]
			public readonly Vector2 p3;

			[Token(Token = "0x400015A")]
			[FieldOffset(Offset = "0x30")]
			public readonly Vector2 p4;

			[Token(Token = "0x400015B")]
			[FieldOffset(Offset = "0x38")]
			public readonly Vector2 p5;

			[Token(Token = "0x400015C")]
			[FieldOffset(Offset = "0x40")]
			public readonly Vector2 p6;

			[Token(Token = "0x400015D")]
			[FieldOffset(Offset = "0x48")]
			public readonly Vector2 p7;

			[Token(Token = "0x400015E")]
			[FieldOffset(Offset = "0x50")]
			public readonly int count;

			[Token(Token = "0x400015F")]
			[FieldOffset(Offset = "0x54")]
			public readonly float radius;

			[Token(Token = "0x4000160")]
			[FieldOffset(Offset = "0x58")]
			public readonly float elementDepth;

			[Token(Token = "0x4000161")]
			[FieldOffset(Offset = "0x5C")]
			public readonly DrawFillOptions drawFillOptions;

			[Token(Token = "0x4000162")]
			[FieldOffset(Offset = "0x60")]
			public readonly Color color;

			[Token(Token = "0x6000169")]
			[Address(RVA = "0x2FDA090", Offset = "0x2FD8690", VA = "0x182FDA090")]
			public static int Size()
			{
				return default(int);
			}
		}

		[Token(Token = "0x2000049")]
		public readonly struct CircleGeometryElement
		{
			[Token(Token = "0x4000163")]
			[FieldOffset(Offset = "0x0")]
			public readonly PhysicsTransform transform;

			[Token(Token = "0x4000164")]
			[FieldOffset(Offset = "0x10")]
			public readonly float radius;

			[Token(Token = "0x4000165")]
			[FieldOffset(Offset = "0x14")]
			public readonly float elementDepth;

			[Token(Token = "0x4000166")]
			[FieldOffset(Offset = "0x18")]
			public readonly DrawFillOptions drawFillOptions;

			[Token(Token = "0x4000167")]
			[FieldOffset(Offset = "0x1C")]
			public readonly Color color;

			[Token(Token = "0x600016A")]
			[Address(RVA = "0x2FCD630", Offset = "0x2FCBC30", VA = "0x182FCD630")]
			public static int Size()
			{
				return default(int);
			}
		}

		[Token(Token = "0x200004A")]
		public readonly struct CapsuleGeometryElement
		{
			[Token(Token = "0x4000168")]
			[FieldOffset(Offset = "0x0")]
			public readonly PhysicsTransform transform;

			[Token(Token = "0x4000169")]
			[FieldOffset(Offset = "0x10")]
			public readonly float radius;

			[Token(Token = "0x400016A")]
			[FieldOffset(Offset = "0x14")]
			public readonly float length;

			[Token(Token = "0x400016B")]
			[FieldOffset(Offset = "0x18")]
			public readonly float elementDepth;

			[Token(Token = "0x400016C")]
			[FieldOffset(Offset = "0x1C")]
			public readonly DrawFillOptions drawFillOptions;

			[Token(Token = "0x400016D")]
			[FieldOffset(Offset = "0x20")]
			public readonly Color color;

			[Token(Token = "0x600016B")]
			[Address(RVA = "0x2FCD2C0", Offset = "0x2FCB8C0", VA = "0x182FCD2C0")]
			public static int Size()
			{
				return default(int);
			}
		}

		[Token(Token = "0x200004B")]
		public readonly struct LineElement
		{
			[Token(Token = "0x400016E")]
			[FieldOffset(Offset = "0x0")]
			public readonly PhysicsTransform transform;

			[Token(Token = "0x400016F")]
			[FieldOffset(Offset = "0x10")]
			public readonly float length;

			[Token(Token = "0x4000170")]
			[FieldOffset(Offset = "0x14")]
			public readonly float elementDepth;

			[Token(Token = "0x4000171")]
			[FieldOffset(Offset = "0x18")]
			public readonly Color color;

			[Token(Token = "0x600016C")]
			[Address(RVA = "0x2FCF8A0", Offset = "0x2FCDEA0", VA = "0x182FCF8A0")]
			public static int Size()
			{
				return default(int);
			}
		}

		[Token(Token = "0x200004C")]
		public readonly struct PointElement
		{
			[Token(Token = "0x4000172")]
			[FieldOffset(Offset = "0x0")]
			public readonly Vector2 position;

			[Token(Token = "0x4000173")]
			[FieldOffset(Offset = "0x8")]
			public readonly float radius;

			[Token(Token = "0x4000174")]
			[FieldOffset(Offset = "0xC")]
			public readonly float elementDepth;

			[Token(Token = "0x4000175")]
			[FieldOffset(Offset = "0x10")]
			public readonly Color color;

			[Token(Token = "0x600016D")]
			[Address(RVA = "0x2FD9D20", Offset = "0x2FD8320", VA = "0x182FD9D20")]
			public static int Size()
			{
				return default(int);
			}
		}

		[Token(Token = "0x4000150")]
		[FieldOffset(Offset = "0x0")]
		internal readonly PhysicsLowLevelScripting2D.PhysicsBuffer m_PolygonGeometryElements;

		[Token(Token = "0x4000151")]
		[FieldOffset(Offset = "0x10")]
		internal readonly PhysicsLowLevelScripting2D.PhysicsBuffer m_CircleGeometryElements;

		[Token(Token = "0x4000152")]
		[FieldOffset(Offset = "0x20")]
		internal readonly PhysicsLowLevelScripting2D.PhysicsBuffer m_CapsuleGeometryElements;

		[Token(Token = "0x4000153")]
		[FieldOffset(Offset = "0x30")]
		internal readonly PhysicsLowLevelScripting2D.PhysicsBuffer m_LineElements;

		[Token(Token = "0x4000154")]
		[FieldOffset(Offset = "0x40")]
		internal readonly PhysicsLowLevelScripting2D.PhysicsBuffer m_PointElements;

		[Token(Token = "0x17000067")]
		public NativeArray<PolygonGeometryElement> polygonGeometryArray
		{
			[Token(Token = "0x6000164")]
			[Address(RVA = "0x2FCE5C0", Offset = "0x2FCCBC0", VA = "0x182FCE5C0")]
			get
			{
				return default(NativeArray<PolygonGeometryElement>);
			}
		}

		[Token(Token = "0x17000068")]
		public NativeArray<CircleGeometryElement> circleGeometryArray
		{
			[Token(Token = "0x6000165")]
			[Address(RVA = "0x2FCE4A0", Offset = "0x2FCCAA0", VA = "0x182FCE4A0")]
			get
			{
				return default(NativeArray<CircleGeometryElement>);
			}
		}

		[Token(Token = "0x17000069")]
		public NativeArray<CapsuleGeometryElement> capsuleGeometryArray
		{
			[Token(Token = "0x6000166")]
			[Address(RVA = "0x2FCE440", Offset = "0x2FCCA40", VA = "0x182FCE440")]
			get
			{
				return default(NativeArray<CapsuleGeometryElement>);
			}
		}

		[Token(Token = "0x1700006A")]
		public NativeArray<LineElement> lineArray
		{
			[Token(Token = "0x6000167")]
			[Address(RVA = "0x2FCE500", Offset = "0x2FCCB00", VA = "0x182FCE500")]
			get
			{
				return default(NativeArray<LineElement>);
			}
		}

		[Token(Token = "0x1700006B")]
		public NativeArray<PointElement> pointArray
		{
			[Token(Token = "0x6000168")]
			[Address(RVA = "0x2FCE560", Offset = "0x2FCCB60", VA = "0x182FCE560")]
			get
			{
				return default(NativeArray<PointElement>);
			}
		}

		[Token(Token = "0x6000163")]
		[Address(RVA = "0x2FCE1B0", Offset = "0x2FCC7B0", VA = "0x182FCE1B0", Slot = "3")]
		public override string ToString()
		{
			return null;
		}
	}

	[Serializable]
	[Token(Token = "0x200004D")]
	public struct DrawColors
	{
		[Token(Token = "0x200004E")]
		[DefaultMember("Item")]
		private struct ConstraintGraphArray
		{
			[Token(Token = "0x400018C")]
			[FieldOffset(Offset = "0x0")]
			public Color graphConstraint0;

			[Token(Token = "0x400018D")]
			[FieldOffset(Offset = "0x10")]
			public Color graphConstraint1;

			[Token(Token = "0x400018E")]
			[FieldOffset(Offset = "0x20")]
			public Color graphConstraint2;

			[Token(Token = "0x400018F")]
			[FieldOffset(Offset = "0x30")]
			public Color graphConstraint3;

			[Token(Token = "0x4000190")]
			[FieldOffset(Offset = "0x40")]
			public Color graphConstraint4;

			[Token(Token = "0x4000191")]
			[FieldOffset(Offset = "0x50")]
			public Color graphConstraint5;

			[Token(Token = "0x4000192")]
			[FieldOffset(Offset = "0x60")]
			public Color graphConstraint6;

			[Token(Token = "0x4000193")]
			[FieldOffset(Offset = "0x70")]
			public Color graphConstraint7;

			[Token(Token = "0x4000194")]
			[FieldOffset(Offset = "0x80")]
			public Color graphConstraint8;

			[Token(Token = "0x4000195")]
			[FieldOffset(Offset = "0x90")]
			public Color graphConstraint9;

			[Token(Token = "0x4000196")]
			[FieldOffset(Offset = "0xA0")]
			public Color graphConstraint10;

			[Token(Token = "0x4000197")]
			[FieldOffset(Offset = "0xB0")]
			public Color graphConstraint11;

			[Token(Token = "0x4000198")]
			[FieldOffset(Offset = "0xC0")]
			public Color graphConstraint12;

			[Token(Token = "0x4000199")]
			[FieldOffset(Offset = "0xD0")]
			public Color graphConstraint13;

			[Token(Token = "0x400019A")]
			[FieldOffset(Offset = "0xE0")]
			public Color graphConstraint14;

			[Token(Token = "0x400019B")]
			[FieldOffset(Offset = "0xF0")]
			public Color graphConstraint15;

			[Token(Token = "0x400019C")]
			[FieldOffset(Offset = "0x100")]
			public Color graphConstraint16;

			[Token(Token = "0x400019D")]
			[FieldOffset(Offset = "0x110")]
			public Color graphConstraint17;

			[Token(Token = "0x400019E")]
			[FieldOffset(Offset = "0x120")]
			public Color graphConstraint18;

			[Token(Token = "0x400019F")]
			[FieldOffset(Offset = "0x130")]
			public Color graphConstraint19;

			[Token(Token = "0x40001A0")]
			[FieldOffset(Offset = "0x140")]
			public Color graphConstraint20;

			[Token(Token = "0x40001A1")]
			[FieldOffset(Offset = "0x150")]
			public Color graphConstraint21;

			[Token(Token = "0x40001A2")]
			[FieldOffset(Offset = "0x160")]
			public Color graphConstraint22;

			[Token(Token = "0x40001A3")]
			[FieldOffset(Offset = "0x170")]
			public Color graphConstraint23;
		}

		[Token(Token = "0x4000176")]
		[FieldOffset(Offset = "0x0")]
		public Color transformAxisX;

		[Token(Token = "0x4000177")]
		[FieldOffset(Offset = "0x10")]
		public Color transformAxisY;

		[Token(Token = "0x4000178")]
		[FieldOffset(Offset = "0x20")]
		public Color bodyBad;

		[Token(Token = "0x4000179")]
		[FieldOffset(Offset = "0x30")]
		public Color bodyDisabled;

		[Token(Token = "0x400017A")]
		[FieldOffset(Offset = "0x40")]
		public Color bodyAwake;

		[Token(Token = "0x400017B")]
		[FieldOffset(Offset = "0x50")]
		public Color bodyStatic;

		[Token(Token = "0x400017C")]
		[FieldOffset(Offset = "0x60")]
		public Color bodyKinematic;

		[Token(Token = "0x400017D")]
		[FieldOffset(Offset = "0x70")]
		public Color bodyTimeOfImpactEvent;

		[Token(Token = "0x400017E")]
		[FieldOffset(Offset = "0x80")]
		public Color bodyFastCollisions;

		[Token(Token = "0x400017F")]
		[FieldOffset(Offset = "0x90")]
		public Color bodyMovingFast;

		[Token(Token = "0x4000180")]
		[FieldOffset(Offset = "0xA0")]
		public Color bodySpeedCapped;

		[Token(Token = "0x4000181")]
		[FieldOffset(Offset = "0xB0")]
		public Color shapeTrigger;

		[Token(Token = "0x4000182")]
		[FieldOffset(Offset = "0xC0")]
		public Color shapeOther;

		[Token(Token = "0x4000183")]
		[FieldOffset(Offset = "0xD0")]
		public Color shapeBounds;

		[Token(Token = "0x4000184")]
		[FieldOffset(Offset = "0xE0")]
		public Color contactSpeculative;

		[Token(Token = "0x4000185")]
		[FieldOffset(Offset = "0xF0")]
		public Color contactAdded;

		[Token(Token = "0x4000186")]
		[FieldOffset(Offset = "0x100")]
		public Color contactPersisted;

		[Token(Token = "0x4000187")]
		[FieldOffset(Offset = "0x110")]
		public Color contactNormal;

		[Token(Token = "0x4000188")]
		[FieldOffset(Offset = "0x120")]
		public Color contactImpulse;

		[Token(Token = "0x4000189")]
		[FieldOffset(Offset = "0x130")]
		public Color contactFriction;

		[Token(Token = "0x400018A")]
		[FieldOffset(Offset = "0x140")]
		public Color solverIsland;

		[Token(Token = "0x400018B")]
		[FieldOffset(Offset = "0x150")]
		private readonly ConstraintGraphArray m_ConstraintGraph;
	}

	[Token(Token = "0x4000126")]
	[FieldOffset(Offset = "0x0")]
	internal readonly ushort m_Index1;

	[Token(Token = "0x4000127")]
	[FieldOffset(Offset = "0x2")]
	private readonly ushort m_Generation;

	[Token(Token = "0x17000064")]
	public static bool bypassLowLevel
	{
		[Token(Token = "0x600015A")]
		[Address(RVA = "0x2FD2A50", Offset = "0x2FD1050", VA = "0x182FD2A50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000065")]
	public static bool isRenderingAllowed
	{
		[Token(Token = "0x600015B")]
		[Address(RVA = "0x2FD2A80", Offset = "0x2FD1080", VA = "0x182FD2A80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000066")]
	public bool isValid
	{
		[Token(Token = "0x600015C")]
		[Address(RVA = "0x2FD99D0", Offset = "0x2FD7FD0", VA = "0x182FD99D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000156")]
	[Address(RVA = "0x2FD9900", Offset = "0x2FD7F00", VA = "0x182FD9900", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x2FD8AE0", Offset = "0x2FD70E0", VA = "0x182FD8AE0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x2F728E0", Offset = "0x2F70EE0", VA = "0x182F728E0", Slot = "4")]
	public bool Equals(PhysicsWorld other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000159")]
	[Address(RVA = "0x2FD8B40", Offset = "0x2FD7140", VA = "0x182FD8B40", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600015D")]
	[Address(RVA = "0x2FD9860", Offset = "0x2FD7E60", VA = "0x182FD9860")]
	internal void SetTransformWriteTweens(ReadOnlySpan<PhysicsBody.TransformWriteTween> transformWriteTweens)
	{
	}

	[Token(Token = "0x600015E")]
	[Address(RVA = "0x2FD8BB0", Offset = "0x2FD71B0", VA = "0x182FD8BB0")]
	public void SendBodyUpdateCallbacks()
	{
	}

	[Token(Token = "0x600015F")]
	[Address(RVA = "0x2FD8E00", Offset = "0x2FD7400", VA = "0x182FD8E00")]
	public void SendContactCallbacks()
	{
	}

	[Token(Token = "0x6000160")]
	[Address(RVA = "0x2FD9460", Offset = "0x2FD7A60", VA = "0x182FD9460")]
	public void SendTriggerCallbacks()
	{
	}

	[Token(Token = "0x6000161")]
	[Address(RVA = "0x2FD9240", Offset = "0x2FD7840", VA = "0x182FD9240")]
	public void SendJointThresholdCallbacks()
	{
	}

	[Token(Token = "0x6000162")]
	[Address(RVA = "0x2FD8AA0", Offset = "0x2FD70A0", VA = "0x182FD8AA0")]
	internal static void DrawAllWorlds(PhysicsAABB drawAABB)
	{
	}
}
