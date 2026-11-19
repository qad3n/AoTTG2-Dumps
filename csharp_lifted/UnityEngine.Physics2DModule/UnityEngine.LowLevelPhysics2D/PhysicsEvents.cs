// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LowLevelPhysics2D.PhysicsEvents
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.LowLevelPhysics2D;

[Token(Token = "0x2000036")]
[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
public readonly struct PhysicsEvents
{
	[Token(Token = "0x2000037")]
	public readonly struct BodyUpdateEvent
	{
		[Token(Token = "0x400010E")]
		[FieldOffset(Offset = "0x0")]
		private readonly IntPtr m_UserData;

		[Token(Token = "0x400010F")]
		[FieldOffset(Offset = "0x8")]
		private readonly PhysicsTransform m_Transform;

		[Token(Token = "0x4000110")]
		[FieldOffset(Offset = "0x18")]
		private readonly PhysicsBody m_Body;

		[Token(Token = "0x4000111")]
		[FieldOffset(Offset = "0x20")]
		private readonly bool m_FellAsleep;

		[Token(Token = "0x1700004E")]
		public PhysicsTransform transform
		{
			[Token(Token = "0x6000136")]
			[Address(RVA = "0x69CFCB0", Offset = "0x69CECB0", VA = "0x69CFCB0")]
			get
			{
				return default(PhysicsTransform);
			}
		}

		[Token(Token = "0x1700004F")]
		public PhysicsBody body
		{
			[Token(Token = "0x6000137")]
			[Address(RVA = "0x69CFCC0", Offset = "0x69CECC0", VA = "0x69CFCC0")]
			get
			{
				return default(PhysicsBody);
			}
		}

		[Token(Token = "0x17000050")]
		public bool fellAsleep
		{
			[Token(Token = "0x6000138")]
			[Address(RVA = "0x69CFCD0", Offset = "0x69CECD0", VA = "0x69CFCD0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000139")]
		[Address(RVA = "0x69CFCE0", Offset = "0x69CECE0", VA = "0x69CFCE0", Slot = "3")]
		public override string ToString()
		{
			return null;
		}
	}

	[Token(Token = "0x2000038")]
	public readonly struct TriggerBeginEvent
	{
		[Token(Token = "0x4000112")]
		[FieldOffset(Offset = "0x0")]
		private readonly PhysicsShape m_TriggerShape;

		[Token(Token = "0x4000113")]
		[FieldOffset(Offset = "0x8")]
		private readonly PhysicsShape m_VisitorShape;

		[Token(Token = "0x17000051")]
		public PhysicsShape triggerShape
		{
			[Token(Token = "0x600013A")]
			[Address(RVA = "0x69CFDB0", Offset = "0x69CEDB0", VA = "0x69CFDB0")]
			get
			{
				return default(PhysicsShape);
			}
		}

		[Token(Token = "0x17000052")]
		public PhysicsShape visitorShape
		{
			[Token(Token = "0x600013B")]
			[Address(RVA = "0x69CFDC0", Offset = "0x69CEDC0", VA = "0x69CFDC0")]
			get
			{
				return default(PhysicsShape);
			}
		}

		[Token(Token = "0x600013C")]
		[Address(RVA = "0x69CFDD0", Offset = "0x69CEDD0", VA = "0x69CFDD0", Slot = "3")]
		public override string ToString()
		{
			return null;
		}
	}

	[Token(Token = "0x2000039")]
	public readonly struct TriggerEndEvent
	{
		[Token(Token = "0x4000114")]
		[FieldOffset(Offset = "0x0")]
		private readonly PhysicsShape m_TriggerShape;

		[Token(Token = "0x4000115")]
		[FieldOffset(Offset = "0x8")]
		private readonly PhysicsShape m_VisitorShape;

		[Token(Token = "0x17000053")]
		public PhysicsShape triggerShape
		{
			[Token(Token = "0x600013D")]
			[Address(RVA = "0x69CFE60", Offset = "0x69CEE60", VA = "0x69CFE60")]
			get
			{
				return default(PhysicsShape);
			}
		}

		[Token(Token = "0x17000054")]
		public PhysicsShape visitorShape
		{
			[Token(Token = "0x600013E")]
			[Address(RVA = "0x69CFE70", Offset = "0x69CEE70", VA = "0x69CFE70")]
			get
			{
				return default(PhysicsShape);
			}
		}

		[Token(Token = "0x600013F")]
		[Address(RVA = "0x69CFE80", Offset = "0x69CEE80", VA = "0x69CFE80", Slot = "3")]
		public override string ToString()
		{
			return null;
		}
	}

	[Token(Token = "0x200003A")]
	public readonly struct ContactBeginEvent
	{
		[Token(Token = "0x4000116")]
		[FieldOffset(Offset = "0x0")]
		private readonly PhysicsShape m_ShapeA;

		[Token(Token = "0x4000117")]
		[FieldOffset(Offset = "0x8")]
		private readonly PhysicsShape m_ShapeB;

		[Token(Token = "0x4000118")]
		[FieldOffset(Offset = "0x10")]
		private readonly PhysicsShape.ContactId m_ContactId;

		[Token(Token = "0x17000055")]
		public PhysicsShape shapeA
		{
			[Token(Token = "0x6000140")]
			[Address(RVA = "0x69CFF10", Offset = "0x69CEF10", VA = "0x69CFF10")]
			get
			{
				return default(PhysicsShape);
			}
		}

		[Token(Token = "0x17000056")]
		public PhysicsShape shapeB
		{
			[Token(Token = "0x6000141")]
			[Address(RVA = "0x69CFF20", Offset = "0x69CEF20", VA = "0x69CFF20")]
			get
			{
				return default(PhysicsShape);
			}
		}

		[Token(Token = "0x17000057")]
		public PhysicsShape.ContactId contactId
		{
			[Token(Token = "0x6000142")]
			[Address(RVA = "0x69CFF30", Offset = "0x69CEF30", VA = "0x69CFF30")]
			get
			{
				return default(PhysicsShape.ContactId);
			}
		}

		[Token(Token = "0x6000143")]
		[Address(RVA = "0x69CFF40", Offset = "0x69CEF40", VA = "0x69CFF40", Slot = "3")]
		public override string ToString()
		{
			return null;
		}
	}

	[Token(Token = "0x200003B")]
	public readonly struct ContactEndEvent
	{
		[Token(Token = "0x4000119")]
		[FieldOffset(Offset = "0x0")]
		private readonly PhysicsShape m_ShapeA;

		[Token(Token = "0x400011A")]
		[FieldOffset(Offset = "0x8")]
		private readonly PhysicsShape m_ShapeB;

		[Token(Token = "0x400011B")]
		[FieldOffset(Offset = "0x10")]
		private readonly PhysicsShape.ContactId m_ContactId;

		[Token(Token = "0x17000058")]
		public PhysicsShape shapeA
		{
			[Token(Token = "0x6000144")]
			[Address(RVA = "0x69D0000", Offset = "0x69CF000", VA = "0x69D0000")]
			get
			{
				return default(PhysicsShape);
			}
		}

		[Token(Token = "0x17000059")]
		public PhysicsShape shapeB
		{
			[Token(Token = "0x6000145")]
			[Address(RVA = "0x69D0010", Offset = "0x69CF010", VA = "0x69D0010")]
			get
			{
				return default(PhysicsShape);
			}
		}

		[Token(Token = "0x1700005A")]
		public PhysicsShape.ContactId contactId
		{
			[Token(Token = "0x6000146")]
			[Address(RVA = "0x69D0020", Offset = "0x69CF020", VA = "0x69D0020")]
			get
			{
				return default(PhysicsShape.ContactId);
			}
		}

		[Token(Token = "0x6000147")]
		[Address(RVA = "0x69D0030", Offset = "0x69CF030", VA = "0x69D0030", Slot = "3")]
		public override string ToString()
		{
			return null;
		}
	}

	[Token(Token = "0x200003C")]
	public readonly struct ContactFilterEvent
	{
		[Token(Token = "0x400011C")]
		[FieldOffset(Offset = "0x0")]
		private readonly PhysicsWorld m_PhysicsWorld;

		[Token(Token = "0x400011D")]
		[FieldOffset(Offset = "0x4")]
		private readonly PhysicsShape m_ShapeA;

		[Token(Token = "0x400011E")]
		[FieldOffset(Offset = "0xC")]
		private readonly PhysicsShape m_ShapeB;

		[Token(Token = "0x1700005B")]
		public PhysicsWorld physicsWorld
		{
			[Token(Token = "0x6000148")]
			[Address(RVA = "0x69D00F0", Offset = "0x69CF0F0", VA = "0x69D00F0")]
			get
			{
				return default(PhysicsWorld);
			}
		}

		[Token(Token = "0x1700005C")]
		public PhysicsShape shapeA
		{
			[Token(Token = "0x6000149")]
			[Address(RVA = "0x69D0100", Offset = "0x69CF100", VA = "0x69D0100")]
			get
			{
				return default(PhysicsShape);
			}
		}

		[Token(Token = "0x1700005D")]
		public PhysicsShape shapeB
		{
			[Token(Token = "0x600014A")]
			[Address(RVA = "0x69D0110", Offset = "0x69CF110", VA = "0x69D0110")]
			get
			{
				return default(PhysicsShape);
			}
		}

		[Token(Token = "0x600014B")]
		[Address(RVA = "0x69D0120", Offset = "0x69CF120", VA = "0x69D0120", Slot = "3")]
		public override string ToString()
		{
			return null;
		}
	}

	[Token(Token = "0x200003D")]
	public readonly struct PreSolveEvent
	{
		[Token(Token = "0x400011F")]
		[FieldOffset(Offset = "0x0")]
		private readonly PhysicsWorld m_PhysicsWorld;

		[Token(Token = "0x4000120")]
		[FieldOffset(Offset = "0x4")]
		private readonly PhysicsShape m_ShapeA;

		[Token(Token = "0x4000121")]
		[FieldOffset(Offset = "0xC")]
		private readonly PhysicsShape m_ShapeB;

		[Token(Token = "0x4000122")]
		[FieldOffset(Offset = "0x14")]
		private readonly Vector2 m_Point;

		[Token(Token = "0x4000123")]
		[FieldOffset(Offset = "0x1C")]
		private readonly Vector2 m_Normal;

		[Token(Token = "0x1700005E")]
		public PhysicsWorld physicsWorld
		{
			[Token(Token = "0x600014C")]
			[Address(RVA = "0x69D01E0", Offset = "0x69CF1E0", VA = "0x69D01E0")]
			get
			{
				return default(PhysicsWorld);
			}
		}

		[Token(Token = "0x1700005F")]
		public PhysicsShape shapeA
		{
			[Token(Token = "0x600014D")]
			[Address(RVA = "0x69D01F0", Offset = "0x69CF1F0", VA = "0x69D01F0")]
			get
			{
				return default(PhysicsShape);
			}
		}

		[Token(Token = "0x17000060")]
		public PhysicsShape shapeB
		{
			[Token(Token = "0x600014E")]
			[Address(RVA = "0x69D0200", Offset = "0x69CF200", VA = "0x69D0200")]
			get
			{
				return default(PhysicsShape);
			}
		}

		[Token(Token = "0x17000061")]
		public Vector2 point
		{
			[Token(Token = "0x600014F")]
			[Address(RVA = "0x69D0210", Offset = "0x69CF210", VA = "0x69D0210")]
			get
			{
				return default(Vector2);
			}
		}

		[Token(Token = "0x17000062")]
		public Vector2 normal
		{
			[Token(Token = "0x6000150")]
			[Address(RVA = "0x69D0220", Offset = "0x69CF220", VA = "0x69D0220")]
			get
			{
				return default(Vector2);
			}
		}

		[Token(Token = "0x6000151")]
		[Address(RVA = "0x69D0230", Offset = "0x69CF230", VA = "0x69D0230", Slot = "3")]
		public override string ToString()
		{
			return null;
		}
	}

	[Token(Token = "0x200003E")]
	public readonly struct JointThresholdEvent
	{
		[Token(Token = "0x4000124")]
		[FieldOffset(Offset = "0x0")]
		private readonly PhysicsJoint m_Joint;

		[Token(Token = "0x4000125")]
		[FieldOffset(Offset = "0x8")]
		private readonly IntPtr m_UserData;

		[Token(Token = "0x17000063")]
		public PhysicsJoint joint
		{
			[Token(Token = "0x6000152")]
			[Address(RVA = "0x69D0490", Offset = "0x69CF490", VA = "0x69D0490")]
			get
			{
				return default(PhysicsJoint);
			}
		}

		[Token(Token = "0x6000153")]
		[Address(RVA = "0x69D04A0", Offset = "0x69CF4A0", VA = "0x69D04A0", Slot = "3")]
		public override string ToString()
		{
			return null;
		}
	}

	[Token(Token = "0x200003F")]
	public delegate void PreSimulateEventHandler(PhysicsWorld world, float deltaTime);

	[Token(Token = "0x400010C")]
	[FieldOffset(Offset = "0x0")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static PreSimulateEventHandler s_PreSimulate;

	[Token(Token = "0x400010D")]
	[FieldOffset(Offset = "0x8")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static PreSimulateEventHandler s_PostSimulate;

	[Token(Token = "0x600012E")]
	[Address(RVA = "0x69CE370", Offset = "0x69CD370", VA = "0x69CE370")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokePreSimulate(PhysicsWorld world, float deltaTime)
	{
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x69CE4C0", Offset = "0x69CD4C0", VA = "0x69CE4C0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokePostSimulate(PhysicsWorld world, float deltaTime)
	{
	}

	[Token(Token = "0x6000130")]
	[Address(RVA = "0x69CE610", Offset = "0x69CD610", VA = "0x69CE610")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static bool SendContactFilterCallback(object callbackTarget, ContactFilterEvent contactFilterEvent)
	{
		return default(bool);
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x69CE6C0", Offset = "0x69CD6C0", VA = "0x69CE6C0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static bool SendPreSolveCallback(object callbackTarget, PreSolveEvent preSolveEvent)
	{
		return default(bool);
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x69CE770", Offset = "0x69CD770", VA = "0x69CE770")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void SendBodyUpdateCallbacks(PhysicsWorld world)
	{
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x69CEAC0", Offset = "0x69CDAC0", VA = "0x69CEAC0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void SendContactCallbacks(PhysicsWorld world)
	{
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x69CF310", Offset = "0x69CE310", VA = "0x69CF310")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void SendTriggerCallbacks(PhysicsWorld world)
	{
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x69CFA00", Offset = "0x69CEA00", VA = "0x69CFA00")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void SendJointThresholdCallbacks(PhysicsWorld world)
	{
	}
}
