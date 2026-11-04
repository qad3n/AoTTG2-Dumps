// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LowLevelPhysics2D.PhysicsCallbacks
// Update status: NEW in this game update
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
				[Address(RVA = "0x1563580", Offset = "0x1561B80", VA = "0x181563580")]
				get
				{
					return default(PhysicsEvents.BodyUpdateEvent);
				}
			}

			[Token(Token = "0x17000039")]
			public IBodyUpdateCallback bodyTarget
			{
				[Token(Token = "0x6000114")]
				[Address(RVA = "0x2FCCEB0", Offset = "0x2FCB4B0", VA = "0x182FCCEB0")]
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
			[Address(RVA = "0x2FCCD80", Offset = "0x2FCB380", VA = "0x182FCCD80")]
			get
			{
				return default(ReadOnlySpan<BodyUpdateTarget>);
			}
		}

		[Token(Token = "0x6000112")]
		[Address(RVA = "0x2FCCD60", Offset = "0x2FCB360", VA = "0x182FCCD60", Slot = "4")]
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
				[Address(RVA = "0x72FD20", Offset = "0x72E320", VA = "0x18072FD20")]
				get
				{
					return default(PhysicsEvents.TriggerBeginEvent);
				}
			}

			[Token(Token = "0x1700003D")]
			public ITriggerCallback triggerShapeTarget
			{
				[Token(Token = "0x6000119")]
				[Address(RVA = "0x2FDB270", Offset = "0x2FD9870", VA = "0x182FDB270")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x1700003E")]
			public ITriggerCallback visitorShapeTarget
			{
				[Token(Token = "0x600011A")]
				[Address(RVA = "0x2FDB320", Offset = "0x2FD9920", VA = "0x182FDB320")]
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
				[Address(RVA = "0x72FD20", Offset = "0x72E320", VA = "0x18072FD20")]
				get
				{
					return default(PhysicsEvents.TriggerEndEvent);
				}
			}

			[Token(Token = "0x17000040")]
			public ITriggerCallback triggerShapeTarget
			{
				[Token(Token = "0x600011C")]
				[Address(RVA = "0x2FDB520", Offset = "0x2FD9B20", VA = "0x182FDB520")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x17000041")]
			public ITriggerCallback visitorShapeTarget
			{
				[Token(Token = "0x600011D")]
				[Address(RVA = "0x2FDB5D0", Offset = "0x2FD9BD0", VA = "0x182FDB5D0")]
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
			[Address(RVA = "0x2FDB3D0", Offset = "0x2FD99D0", VA = "0x182FDB3D0")]
			get
			{
				return default(ReadOnlySpan<TriggerBeginTarget>);
			}
		}

		[Token(Token = "0x1700003B")]
		public ReadOnlySpan<TriggerEndTarget> EndCallbackTargets
		{
			[Token(Token = "0x6000116")]
			[Address(RVA = "0x2FDB430", Offset = "0x2FD9A30", VA = "0x182FDB430")]
			get
			{
				return default(ReadOnlySpan<TriggerEndTarget>);
			}
		}

		[Token(Token = "0x6000117")]
		[Address(RVA = "0x2FCD890", Offset = "0x2FCBE90", VA = "0x182FCD890", Slot = "4")]
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
				[Address(RVA = "0x2FCD710", Offset = "0x2FCBD10", VA = "0x182FCD710")]
				get
				{
					return default(PhysicsEvents.ContactBeginEvent);
				}
			}

			[Token(Token = "0x17000045")]
			public IContactCallback shapeTargetA
			{
				[Token(Token = "0x6000122")]
				[Address(RVA = "0x2FCD730", Offset = "0x2FCBD30", VA = "0x182FCD730")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x17000046")]
			public IContactCallback shapeTargetB
			{
				[Token(Token = "0x6000123")]
				[Address(RVA = "0x2FCD7E0", Offset = "0x2FCBDE0", VA = "0x182FCD7E0")]
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
				[Address(RVA = "0x2FCD710", Offset = "0x2FCBD10", VA = "0x182FCD710")]
				get
				{
					return default(PhysicsEvents.ContactEndEvent);
				}
			}

			[Token(Token = "0x17000048")]
			public IContactCallback shapeTargetA
			{
				[Token(Token = "0x6000125")]
				[Address(RVA = "0x2FCDA60", Offset = "0x2FCC060", VA = "0x182FCDA60")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x17000049")]
			public IContactCallback shapeTargetB
			{
				[Token(Token = "0x6000126")]
				[Address(RVA = "0x2FCDB10", Offset = "0x2FCC110", VA = "0x182FCDB10")]
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
			[Address(RVA = "0x2FCD8D0", Offset = "0x2FCBED0", VA = "0x182FCD8D0")]
			get
			{
				return default(ReadOnlySpan<ContactBeginTarget>);
			}
		}

		[Token(Token = "0x17000043")]
		public ReadOnlySpan<ContactEndTarget> EndCallbackTargets
		{
			[Token(Token = "0x600011F")]
			[Address(RVA = "0x2FCD930", Offset = "0x2FCBF30", VA = "0x182FCD930")]
			get
			{
				return default(ReadOnlySpan<ContactEndTarget>);
			}
		}

		[Token(Token = "0x6000120")]
		[Address(RVA = "0x2FCD890", Offset = "0x2FCBE90", VA = "0x182FCD890", Slot = "4")]
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
				[Address(RVA = "0x72FD20", Offset = "0x72E320", VA = "0x18072FD20")]
				get
				{
					return default(PhysicsEvents.JointThresholdEvent);
				}
			}

			[Token(Token = "0x1700004C")]
			public IJointThresholdCallback jointTarget
			{
				[Token(Token = "0x600012A")]
				[Address(RVA = "0x2FCF170", Offset = "0x2FCD770", VA = "0x182FCF170")]
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
			[Address(RVA = "0x2FCF0A0", Offset = "0x2FCD6A0", VA = "0x182FCF0A0")]
			get
			{
				return default(ReadOnlySpan<JointThresholdTarget>);
			}
		}

		[Token(Token = "0x6000128")]
		[Address(RVA = "0x2FCCD60", Offset = "0x2FCB360", VA = "0x182FCCD60", Slot = "4")]
		public void Dispose()
		{
		}
	}
}
