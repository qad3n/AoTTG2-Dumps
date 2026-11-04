// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LowLevelPhysics2D.PhysicsEvents
// Update status: NEW in this game update
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
			[Address(RVA = "0xADC2D0", Offset = "0xADA8D0", VA = "0x180ADC2D0")]
			get
			{
				return default(PhysicsTransform);
			}
		}

		[Token(Token = "0x1700004F")]
		public PhysicsBody body
		{
			[Token(Token = "0x6000137")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
			get
			{
				return default(PhysicsBody);
			}
		}

		[Token(Token = "0x17000050")]
		public bool fellAsleep
		{
			[Token(Token = "0x6000138")]
			[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000139")]
		[Address(RVA = "0x2FCCDE0", Offset = "0x2FCB3E0", VA = "0x182FCCDE0", Slot = "3")]
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
			[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
			get
			{
				return default(PhysicsShape);
			}
		}

		[Token(Token = "0x17000052")]
		public PhysicsShape visitorShape
		{
			[Token(Token = "0x600013B")]
			[Address(RVA = "0xADC170", Offset = "0xADA770", VA = "0x180ADC170")]
			get
			{
				return default(PhysicsShape);
			}
		}

		[Token(Token = "0x600013C")]
		[Address(RVA = "0x2FDB1E0", Offset = "0x2FD97E0", VA = "0x182FDB1E0", Slot = "3")]
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
			[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
			get
			{
				return default(PhysicsShape);
			}
		}

		[Token(Token = "0x17000054")]
		public PhysicsShape visitorShape
		{
			[Token(Token = "0x600013E")]
			[Address(RVA = "0xADC170", Offset = "0xADA770", VA = "0x180ADC170")]
			get
			{
				return default(PhysicsShape);
			}
		}

		[Token(Token = "0x600013F")]
		[Address(RVA = "0x2FDB490", Offset = "0x2FD9A90", VA = "0x182FDB490", Slot = "3")]
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
			[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
			get
			{
				return default(PhysicsShape);
			}
		}

		[Token(Token = "0x17000056")]
		public PhysicsShape shapeB
		{
			[Token(Token = "0x6000141")]
			[Address(RVA = "0xADC170", Offset = "0xADA770", VA = "0x180ADC170")]
			get
			{
				return default(PhysicsShape);
			}
		}

		[Token(Token = "0x17000057")]
		public PhysicsShape.ContactId contactId
		{
			[Token(Token = "0x6000142")]
			[Address(RVA = "0x561130", Offset = "0x55F730", VA = "0x180561130")]
			get
			{
				return default(PhysicsShape.ContactId);
			}
		}

		[Token(Token = "0x6000143")]
		[Address(RVA = "0x2FCD640", Offset = "0x2FCBC40", VA = "0x182FCD640", Slot = "3")]
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
			[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
			get
			{
				return default(PhysicsShape);
			}
		}

		[Token(Token = "0x17000059")]
		public PhysicsShape shapeB
		{
			[Token(Token = "0x6000145")]
			[Address(RVA = "0xADC170", Offset = "0xADA770", VA = "0x180ADC170")]
			get
			{
				return default(PhysicsShape);
			}
		}

		[Token(Token = "0x1700005A")]
		public PhysicsShape.ContactId contactId
		{
			[Token(Token = "0x6000146")]
			[Address(RVA = "0x561130", Offset = "0x55F730", VA = "0x180561130")]
			get
			{
				return default(PhysicsShape.ContactId);
			}
		}

		[Token(Token = "0x6000147")]
		[Address(RVA = "0x2FCD990", Offset = "0x2FCBF90", VA = "0x182FCD990", Slot = "3")]
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
			[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
			get
			{
				return default(PhysicsWorld);
			}
		}

		[Token(Token = "0x1700005C")]
		public PhysicsShape shapeA
		{
			[Token(Token = "0x6000149")]
			[Address(RVA = "0xADC3D0", Offset = "0xADA9D0", VA = "0x180ADC3D0")]
			get
			{
				return default(PhysicsShape);
			}
		}

		[Token(Token = "0x1700005D")]
		public PhysicsShape shapeB
		{
			[Token(Token = "0x600014A")]
			[Address(RVA = "0x2FCDF30", Offset = "0x2FCC530", VA = "0x182FCDF30")]
			get
			{
				return default(PhysicsShape);
			}
		}

		[Token(Token = "0x600014B")]
		[Address(RVA = "0x2FCDE70", Offset = "0x2FCC470", VA = "0x182FCDE70", Slot = "3")]
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
			[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
			get
			{
				return default(PhysicsWorld);
			}
		}

		[Token(Token = "0x1700005F")]
		public PhysicsShape shapeA
		{
			[Token(Token = "0x600014D")]
			[Address(RVA = "0xADC3D0", Offset = "0xADA9D0", VA = "0x180ADC3D0")]
			get
			{
				return default(PhysicsShape);
			}
		}

		[Token(Token = "0x17000060")]
		public PhysicsShape shapeB
		{
			[Token(Token = "0x600014E")]
			[Address(RVA = "0x2FCDF30", Offset = "0x2FCC530", VA = "0x182FCDF30")]
			get
			{
				return default(PhysicsShape);
			}
		}

		[Token(Token = "0x17000061")]
		public Vector2 point
		{
			[Token(Token = "0x600014F")]
			[Address(RVA = "0x155C620", Offset = "0x155AC20", VA = "0x18155C620")]
			get
			{
				return default(Vector2);
			}
		}

		[Token(Token = "0x17000062")]
		public Vector2 normal
		{
			[Token(Token = "0x6000150")]
			[Address(RVA = "0x2FDA3C0", Offset = "0x2FD89C0", VA = "0x182FDA3C0")]
			get
			{
				return default(Vector2);
			}
		}

		[Token(Token = "0x6000151")]
		[Address(RVA = "0x2FDA130", Offset = "0x2FD8730", VA = "0x182FDA130", Slot = "3")]
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
			[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
			get
			{
				return default(PhysicsJoint);
			}
		}

		[Token(Token = "0x6000153")]
		[Address(RVA = "0x2FCF100", Offset = "0x2FCD700", VA = "0x182FCF100", Slot = "3")]
		public override string ToString()
		{
			return null;
		}
	}

	[Token(Token = "0x200003F")]
	public delegate void PreSimulateEventHandler(PhysicsWorld world, float deltaTime);

	[Token(Token = "0x400010C")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static PreSimulateEventHandler s_PreSimulate;

	[Token(Token = "0x400010D")]
	[FieldOffset(Offset = "0x8")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static PreSimulateEventHandler s_PostSimulate;

	[Token(Token = "0x600012E")]
	[Address(RVA = "0x2FD1900", Offset = "0x2FCFF00", VA = "0x182FD1900")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokePreSimulate(PhysicsWorld world, float deltaTime)
	{
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x2FD1850", Offset = "0x2FCFE50", VA = "0x182FD1850")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokePostSimulate(PhysicsWorld world, float deltaTime)
	{
	}

	[Token(Token = "0x6000130")]
	[Address(RVA = "0x2FD19F0", Offset = "0x2FCFFF0", VA = "0x182FD19F0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static bool SendContactFilterCallback(object callbackTarget, ContactFilterEvent contactFilterEvent)
	{
		return default(bool);
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x2FD1AF0", Offset = "0x2FD00F0", VA = "0x182FD1AF0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static bool SendPreSolveCallback(object callbackTarget, PreSolveEvent preSolveEvent)
	{
		return default(bool);
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x2FD19B0", Offset = "0x2FCFFB0", VA = "0x182FD19B0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void SendBodyUpdateCallbacks(PhysicsWorld world)
	{
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x2FD19D0", Offset = "0x2FCFFD0", VA = "0x182FD19D0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void SendContactCallbacks(PhysicsWorld world)
	{
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x2FD1BD0", Offset = "0x2FD01D0", VA = "0x182FD1BD0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void SendTriggerCallbacks(PhysicsWorld world)
	{
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x2FD1AD0", Offset = "0x2FD00D0", VA = "0x182FD1AD0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void SendJointThresholdCallbacks(PhysicsWorld world)
	{
	}
}
