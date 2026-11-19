// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LowLevelPhysics2D.PhysicsCallbacks
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.LowLevelPhysics2D;

[Token(Token = "0x2000024")]
public readonly struct PhysicsCallbacks
{
	[Token(Token = "0x2000025")]
	public interface IBodyUpdateCallback
	{
		[Token(Token = "0x6000109")]
		void OnBodyUpdate2D(PhysicsEvents.BodyUpdateEvent bodyUpdateEvent);
	}

	[Token(Token = "0x2000026")]
	public interface IContactFilterCallback
	{
		[Token(Token = "0x600010A")]
		bool OnContactFilter2D(PhysicsEvents.ContactFilterEvent contactFilterEvent);
	}

	[Token(Token = "0x2000027")]
	public interface IPreSolveCallback
	{
		[Token(Token = "0x600010B")]
		bool OnPreSolve2D(PhysicsEvents.PreSolveEvent preSolveEvent);
	}

	[Token(Token = "0x2000028")]
	public interface ITriggerCallback
	{
		[Token(Token = "0x600010C")]
		void OnTriggerBegin2D(PhysicsEvents.TriggerBeginEvent beginEvent);

		[Token(Token = "0x600010D")]
		void OnTriggerEnd2D(PhysicsEvents.TriggerEndEvent endEvent);
	}

	[Token(Token = "0x2000029")]
	public interface IContactCallback
	{
		[Token(Token = "0x600010E")]
		void OnContactBegin2D(PhysicsEvents.ContactBeginEvent beginEvent);

		[Token(Token = "0x600010F")]
		void OnContactEnd2D(PhysicsEvents.ContactEndEvent endEvent);
	}

	[Token(Token = "0x200002A")]
	public interface IJointThresholdCallback
	{
		[Token(Token = "0x6000110")]
		void OnJointThreshold2D(PhysicsEvents.JointThresholdEvent thresholdEvent);
	}

	[Token(Token = "0x200002B")]
	public readonly struct BodyUpdateCallbackTargets : IDisposable
	{
		[Token(Token = "0x200002C")]
		public readonly struct BodyUpdateTarget
		{
			[Token(Token = "0x40000FD")]
			[FieldOffset(Offset = "0x0")]
			private readonly PhysicsEvents.BodyUpdateEvent m_BodyUpdateEvent;

			[Token(Token = "0x17000038")]
			public PhysicsEvents.BodyUpdateEvent bodyUpdateEvent
			{
				[Token(Token = "0x6000113")]
				[Address(RVA = "0x69CD810", Offset = "0x69CC810", VA = "0x69CD810")]
				get
				{
					return default(PhysicsEvents.BodyUpdateEvent);
				}
			}

			[Token(Token = "0x17000039")]
			public IBodyUpdateCallback bodyTarget
			{
				[Token(Token = "0x6000114")]
				[Address(RVA = "0x69CD830", Offset = "0x69CC830", VA = "0x69CD830")]
				get
				{
					return null;
				}
			}
		}

		[Token(Token = "0x40000FC")]
		[FieldOffset(Offset = "0x0")]
		private readonly PhysicsLowLevelScripting2D.PhysicsBuffer m_BodyUpdateCallbackTargets;

		[Token(Token = "0x17000037")]
		public ReadOnlySpan<BodyUpdateTarget> bodyUpdateCallbackTargets
		{
			[Token(Token = "0x6000111")]
			[Address(RVA = "0x69CD7B0", Offset = "0x69CC7B0", VA = "0x69CD7B0")]
			get
			{
				return default(ReadOnlySpan<BodyUpdateTarget>);
			}
		}

		[Token(Token = "0x6000112")]
		[Address(RVA = "0x69CD7F0", Offset = "0x69CC7F0", VA = "0x69CD7F0", Slot = "4")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x200002D")]
	public readonly struct TriggerCallbackTargets : IDisposable
	{
		[Token(Token = "0x200002E")]
		public readonly struct TriggerBeginTarget
		{
			[Token(Token = "0x4000100")]
			[FieldOffset(Offset = "0x0")]
			private readonly PhysicsEvents.TriggerBeginEvent m_BeginEvent;

			[Token(Token = "0x1700003C")]
			public PhysicsEvents.TriggerBeginEvent beginEvent
			{
				[Token(Token = "0x6000118")]
				[Address(RVA = "0x69CD9A0", Offset = "0x69CC9A0", VA = "0x69CD9A0")]
				get
				{
					return default(PhysicsEvents.TriggerBeginEvent);
				}
			}

			[Token(Token = "0x1700003D")]
			public ITriggerCallback triggerShapeTarget
			{
				[Token(Token = "0x6000119")]
				[Address(RVA = "0x69CD9B0", Offset = "0x69CC9B0", VA = "0x69CD9B0")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x1700003E")]
			public ITriggerCallback visitorShapeTarget
			{
				[Token(Token = "0x600011A")]
				[Address(RVA = "0x69CDAF0", Offset = "0x69CCAF0", VA = "0x69CDAF0")]
				get
				{
					return null;
				}
			}
		}

		[Token(Token = "0x200002F")]
		public readonly struct TriggerEndTarget
		{
			[Token(Token = "0x4000101")]
			[FieldOffset(Offset = "0x0")]
			private readonly PhysicsEvents.TriggerEndEvent m_EndEvent;

			[Token(Token = "0x1700003F")]
			public PhysicsEvents.TriggerEndEvent endEvent
			{
				[Token(Token = "0x600011B")]
				[Address(RVA = "0x69CDBB0", Offset = "0x69CCBB0", VA = "0x69CDBB0")]
				get
				{
					return default(PhysicsEvents.TriggerEndEvent);
				}
			}

			[Token(Token = "0x17000040")]
			public ITriggerCallback triggerShapeTarget
			{
				[Token(Token = "0x600011C")]
				[Address(RVA = "0x69CDBC0", Offset = "0x69CCBC0", VA = "0x69CDBC0")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x17000041")]
			public ITriggerCallback visitorShapeTarget
			{
				[Token(Token = "0x600011D")]
				[Address(RVA = "0x69CDC80", Offset = "0x69CCC80", VA = "0x69CDC80")]
				get
				{
					return null;
				}
			}
		}

		[Token(Token = "0x40000FE")]
		[FieldOffset(Offset = "0x0")]
		private readonly PhysicsLowLevelScripting2D.PhysicsBuffer m_BeginCallbackTargets;

		[Token(Token = "0x40000FF")]
		[FieldOffset(Offset = "0x10")]
		private readonly PhysicsLowLevelScripting2D.PhysicsBuffer m_EndCallbackTargets;

		[Token(Token = "0x1700003A")]
		public ReadOnlySpan<TriggerBeginTarget> BeginCallbackTargets
		{
			[Token(Token = "0x6000115")]
			[Address(RVA = "0x69CD8F0", Offset = "0x69CC8F0", VA = "0x69CD8F0")]
			get
			{
				return default(ReadOnlySpan<TriggerBeginTarget>);
			}
		}

		[Token(Token = "0x1700003B")]
		public ReadOnlySpan<TriggerEndTarget> EndCallbackTargets
		{
			[Token(Token = "0x6000116")]
			[Address(RVA = "0x69CD930", Offset = "0x69CC930", VA = "0x69CD930")]
			get
			{
				return default(ReadOnlySpan<TriggerEndTarget>);
			}
		}

		[Token(Token = "0x6000117")]
		[Address(RVA = "0x69CD970", Offset = "0x69CC970", VA = "0x69CD970", Slot = "4")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x2000030")]
	public readonly struct ContactCallbackTargets : IDisposable
	{
		[Token(Token = "0x2000031")]
		public readonly struct ContactBeginTarget
		{
			[Token(Token = "0x4000104")]
			[FieldOffset(Offset = "0x0")]
			private readonly PhysicsEvents.ContactBeginEvent m_BeginEvent;

			[Token(Token = "0x17000044")]
			public PhysicsEvents.ContactBeginEvent beginEvent
			{
				[Token(Token = "0x6000121")]
				[Address(RVA = "0x69CDDF0", Offset = "0x69CCDF0", VA = "0x69CDDF0")]
				get
				{
					return default(PhysicsEvents.ContactBeginEvent);
				}
			}

			[Token(Token = "0x17000045")]
			public IContactCallback shapeTargetA
			{
				[Token(Token = "0x6000122")]
				[Address(RVA = "0x69CDE10", Offset = "0x69CCE10", VA = "0x69CDE10")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x17000046")]
			public IContactCallback shapeTargetB
			{
				[Token(Token = "0x6000123")]
				[Address(RVA = "0x69CDED0", Offset = "0x69CCED0", VA = "0x69CDED0")]
				get
				{
					return null;
				}
			}
		}

		[Token(Token = "0x2000032")]
		public readonly struct ContactEndTarget
		{
			[Token(Token = "0x4000105")]
			[FieldOffset(Offset = "0x0")]
			private readonly PhysicsEvents.ContactEndEvent m_EndEvent;

			[Token(Token = "0x17000047")]
			public PhysicsEvents.ContactEndEvent endEvent
			{
				[Token(Token = "0x6000124")]
				[Address(RVA = "0x69CDF90", Offset = "0x69CCF90", VA = "0x69CDF90")]
				get
				{
					return default(PhysicsEvents.ContactEndEvent);
				}
			}

			[Token(Token = "0x17000048")]
			public IContactCallback shapeTargetA
			{
				[Token(Token = "0x6000125")]
				[Address(RVA = "0x69CDFB0", Offset = "0x69CCFB0", VA = "0x69CDFB0")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x17000049")]
			public IContactCallback shapeTargetB
			{
				[Token(Token = "0x6000126")]
				[Address(RVA = "0x69CE070", Offset = "0x69CD070", VA = "0x69CE070")]
				get
				{
					return null;
				}
			}
		}

		[Token(Token = "0x4000102")]
		[FieldOffset(Offset = "0x0")]
		private readonly PhysicsLowLevelScripting2D.PhysicsBuffer m_BeginCallbackTargets;

		[Token(Token = "0x4000103")]
		[FieldOffset(Offset = "0x10")]
		private readonly PhysicsLowLevelScripting2D.PhysicsBuffer m_EndCallbackTargets;

		[Token(Token = "0x17000042")]
		public ReadOnlySpan<ContactBeginTarget> BeginCallbackTargets
		{
			[Token(Token = "0x600011E")]
			[Address(RVA = "0x69CDD40", Offset = "0x69CCD40", VA = "0x69CDD40")]
			get
			{
				return default(ReadOnlySpan<ContactBeginTarget>);
			}
		}

		[Token(Token = "0x17000043")]
		public ReadOnlySpan<ContactEndTarget> EndCallbackTargets
		{
			[Token(Token = "0x600011F")]
			[Address(RVA = "0x69CDD80", Offset = "0x69CCD80", VA = "0x69CDD80")]
			get
			{
				return default(ReadOnlySpan<ContactEndTarget>);
			}
		}

		[Token(Token = "0x6000120")]
		[Address(RVA = "0x69CDDC0", Offset = "0x69CCDC0", VA = "0x69CDDC0", Slot = "4")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x2000033")]
	public readonly struct JointThresholdCallbackTargets : IDisposable
	{
		[Token(Token = "0x2000034")]
		public readonly struct JointThresholdTarget
		{
			[Token(Token = "0x4000107")]
			[FieldOffset(Offset = "0x0")]
			private readonly PhysicsEvents.JointThresholdEvent m_JointThresholdEvent;

			[Token(Token = "0x1700004B")]
			public PhysicsEvents.JointThresholdEvent jointThresholdEvent
			{
				[Token(Token = "0x6000129")]
				[Address(RVA = "0x69CE190", Offset = "0x69CD190", VA = "0x69CE190")]
				get
				{
					return default(PhysicsEvents.JointThresholdEvent);
				}
			}

			[Token(Token = "0x1700004C")]
			public IJointThresholdCallback jointTarget
			{
				[Token(Token = "0x600012A")]
				[Address(RVA = "0x69CE1A0", Offset = "0x69CD1A0", VA = "0x69CE1A0")]
				get
				{
					return null;
				}
			}
		}

		[Token(Token = "0x4000106")]
		[FieldOffset(Offset = "0x0")]
		private readonly PhysicsLowLevelScripting2D.PhysicsBuffer m_JointThresholdCallbackTargets;

		[Token(Token = "0x1700004A")]
		public ReadOnlySpan<JointThresholdTarget> jointThresholdCallbackTargets
		{
			[Token(Token = "0x6000127")]
			[Address(RVA = "0x69CE130", Offset = "0x69CD130", VA = "0x69CE130")]
			get
			{
				return default(ReadOnlySpan<JointThresholdTarget>);
			}
		}

		[Token(Token = "0x6000128")]
		[Address(RVA = "0x69CE170", Offset = "0x69CD170", VA = "0x69CE170", Slot = "4")]
		public void Dispose()
		{
		}
	}
}
