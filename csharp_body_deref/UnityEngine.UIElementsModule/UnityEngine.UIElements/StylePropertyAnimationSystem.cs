// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StylePropertyAnimationSystem
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using JetBrains.Annotations;
using UnityEngine.Bindings;
using UnityEngine.Pool;
using UnityEngine.UIElements.StyleSheets;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000450")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal class StylePropertyAnimationSystem : IStylePropertyAnimationSystem
{
	[Token(Token = "0x2000451")]
	[Flags]
	private enum TransitionState
	{
		[Token(Token = "0x4000E71")]
		None = 0,
		[Token(Token = "0x4000E72")]
		Running = 1,
		[Token(Token = "0x4000E73")]
		Started = 2,
		[Token(Token = "0x4000E74")]
		Ended = 4,
		[Token(Token = "0x4000E75")]
		Canceled = 8
	}

	[Token(Token = "0x2000452")]
	private struct AnimationDataSet<TTimingData, TStyleData>
	{
		[Token(Token = "0x4000E76")]
		[FieldOffset(Offset = "0x0")]
		public VisualElement[] elements;

		[Token(Token = "0x4000E77")]
		[FieldOffset(Offset = "0x0")]
		public StylePropertyId[] properties;

		[Token(Token = "0x4000E78")]
		[FieldOffset(Offset = "0x0")]
		public TTimingData[] timing;

		[Token(Token = "0x4000E79")]
		[FieldOffset(Offset = "0x0")]
		public TStyleData[] style;

		[Token(Token = "0x4000E7A")]
		[FieldOffset(Offset = "0x0")]
		public int count;

		[Token(Token = "0x4000E7B")]
		[FieldOffset(Offset = "0x0")]
		private Dictionary<ElementPropertyPair, int> indices;

		[Token(Token = "0x17000907")]
		private int capacity
		{
			[Token(Token = "0x6002196")]
			get
			{
				return default(int);
			}
			[Token(Token = "0x6002197")]
			set
			{
			}
		}

		[Token(Token = "0x6002198")]
		private void LocalInit()
		{
		}

		[Token(Token = "0x6002199")]
		public static AnimationDataSet<TTimingData, TStyleData> Create()
		{
			return default(AnimationDataSet<TTimingData, TStyleData>);
		}

		[Token(Token = "0x600219A")]
		public bool IndexOf(VisualElement ve, StylePropertyId prop, out int index)
		{
			return default(bool);
		}

		[Token(Token = "0x600219B")]
		public void Add(VisualElement owner, StylePropertyId prop, TTimingData timingData, TStyleData styleData)
		{
		}

		[Token(Token = "0x600219C")]
		public void Remove(int cancelledIndex)
		{
		}

		[Token(Token = "0x600219D")]
		public void Replace(int index, TTimingData timingData, TStyleData styleData)
		{
		}

		[Token(Token = "0x600219E")]
		public void RemoveAll(VisualElement ve)
		{
		}

		[Token(Token = "0x600219F")]
		public void RemoveAll()
		{
		}

		[Token(Token = "0x60021A0")]
		public void GetActivePropertiesForElement(VisualElement ve, List<StylePropertyId> outProperties)
		{
		}
	}

	[Token(Token = "0x2000453")]
	private struct ElementPropertyPair
	{
		[Token(Token = "0x2000454")]
		private class EqualityComparer : IEqualityComparer<ElementPropertyPair>
		{
			[Token(Token = "0x60021A3")]
			[Address(RVA = "0x6B186F0", Offset = "0x6B176F0", VA = "0x6B186F0", Slot = "4")]
			public bool Equals(ElementPropertyPair x, ElementPropertyPair y)
			{
				return default(bool);
			}

			[Token(Token = "0x60021A4")]
			[Address(RVA = "0x6B18700", Offset = "0x6B17700", VA = "0x6B18700", Slot = "5")]
			public int GetHashCode(ElementPropertyPair obj)
			{
				return default(int);
			}

			[Token(Token = "0x60021A5")]
			[Address(RVA = "0x6B186E0", Offset = "0x6B176E0", VA = "0x6B186E0")]
			public EqualityComparer()
			{
			}
		}

		[Token(Token = "0x4000E7C")]
		[FieldOffset(Offset = "0x0")]
		public static readonly IEqualityComparer<ElementPropertyPair> Comparer;

		[Token(Token = "0x4000E7D")]
		[FieldOffset(Offset = "0x0")]
		public readonly VisualElement element;

		[Token(Token = "0x4000E7E")]
		[FieldOffset(Offset = "0x8")]
		public readonly StylePropertyId property;

		[Token(Token = "0x60021A1")]
		[Address(RVA = "0x6B18650", Offset = "0x6B17650", VA = "0x6B18650")]
		public ElementPropertyPair(VisualElement element, StylePropertyId property)
		{
		}
	}

	[Token(Token = "0x2000455")]
	private abstract class Values
	{
		[Token(Token = "0x60021A6")]
		public abstract void CancelAllAnimations();

		[Token(Token = "0x60021A7")]
		public abstract void CancelAllAnimations(VisualElement ve);

		[Token(Token = "0x60021A8")]
		public abstract void CancelAnimation(VisualElement ve, StylePropertyId id);

		[Token(Token = "0x60021A9")]
		public abstract void UpdateAnimation(VisualElement ve, StylePropertyId id);

		[Token(Token = "0x60021AA")]
		public abstract void GetAllAnimations(VisualElement ve, List<StylePropertyId> outPropertyIds);

		[Token(Token = "0x60021AB")]
		public abstract void Update(double currentTime);

		[Token(Token = "0x60021AC")]
		protected abstract void UpdateValues();

		[Token(Token = "0x60021AD")]
		protected abstract void UpdateComputedStyle();

		[Token(Token = "0x60021AE")]
		protected abstract void UpdateComputedStyle(int i);

		[Token(Token = "0x60021AF")]
		[Address(RVA = "0x6B18730", Offset = "0x6B17730", VA = "0x6B18730")]
		protected Values()
		{
		}
	}

	[Token(Token = "0x2000456")]
	private abstract class Values<T> : Values
	{
		[Token(Token = "0x2000457")]
		private class TransitionEventsFrameState
		{
			[Token(Token = "0x4000E84")]
			[FieldOffset(Offset = "0x0")]
			private static readonly UnityEngine.Pool.ObjectPool<Queue<EventBase>> k_EventQueuePool;

			[Token(Token = "0x4000E85")]
			[FieldOffset(Offset = "0x0")]
			public readonly Dictionary<ElementPropertyPair, TransitionState> elementPropertyStateDelta;

			[Token(Token = "0x4000E86")]
			[FieldOffset(Offset = "0x0")]
			public readonly Dictionary<ElementPropertyPair, Queue<EventBase>> elementPropertyQueuedEvents;

			[Token(Token = "0x4000E87")]
			[FieldOffset(Offset = "0x0")]
			public IPanel panel;

			[Token(Token = "0x4000E88")]
			[FieldOffset(Offset = "0x0")]
			private int m_ChangesCount;

			[Token(Token = "0x60021CA")]
			public static Queue<EventBase> GetPooledQueue()
			{
				return null;
			}

			[Token(Token = "0x60021CB")]
			public void RegisterChange()
			{
			}

			[Token(Token = "0x60021CC")]
			public void UnregisterChange()
			{
			}

			[Token(Token = "0x60021CD")]
			public bool StateChanged()
			{
				return default(bool);
			}

			[Token(Token = "0x60021CE")]
			public void Clear()
			{
			}

			[Token(Token = "0x60021CF")]
			public TransitionEventsFrameState()
			{
			}
		}

		[Token(Token = "0x2000459")]
		public struct TimingData
		{
			[Token(Token = "0x4000E8A")]
			[FieldOffset(Offset = "0x0")]
			public double startTime;

			[Token(Token = "0x4000E8B")]
			[FieldOffset(Offset = "0x0")]
			public float duration;

			[Token(Token = "0x4000E8C")]
			[FieldOffset(Offset = "0x0")]
			public Func<float, float> easingCurve;

			[Token(Token = "0x4000E8D")]
			[FieldOffset(Offset = "0x0")]
			public float easedProgress;

			[Token(Token = "0x4000E8E")]
			[FieldOffset(Offset = "0x0")]
			public float reversingShorteningFactor;

			[Token(Token = "0x4000E8F")]
			[FieldOffset(Offset = "0x0")]
			public bool isStarted;

			[Token(Token = "0x4000E90")]
			[FieldOffset(Offset = "0x0")]
			public float delay;
		}

		[Token(Token = "0x200045A")]
		public struct StyleData
		{
			[Token(Token = "0x4000E91")]
			[FieldOffset(Offset = "0x0")]
			public T startValue;

			[Token(Token = "0x4000E92")]
			[FieldOffset(Offset = "0x0")]
			public T endValue;

			[Token(Token = "0x4000E93")]
			[FieldOffset(Offset = "0x0")]
			public T reversingAdjustedStartValue;

			[Token(Token = "0x4000E94")]
			[FieldOffset(Offset = "0x0")]
			public T currentValue;
		}

		[Token(Token = "0x200045B")]
		public struct EmptyData
		{
			[Token(Token = "0x4000E95")]
			[FieldOffset(Offset = "0x0")]
			public static EmptyData Default;
		}

		[Token(Token = "0x4000E7F")]
		[FieldOffset(Offset = "0x0")]
		private double m_CurrentTime;

		[Token(Token = "0x4000E80")]
		[FieldOffset(Offset = "0x0")]
		private TransitionEventsFrameState m_CurrentFrameEventsState;

		[Token(Token = "0x4000E81")]
		[FieldOffset(Offset = "0x0")]
		private TransitionEventsFrameState m_NextFrameEventsState;

		[Token(Token = "0x4000E82")]
		[FieldOffset(Offset = "0x0")]
		public AnimationDataSet<TimingData, StyleData> running;

		[Token(Token = "0x4000E83")]
		[FieldOffset(Offset = "0x0")]
		public AnimationDataSet<EmptyData, T> completed;

		[Token(Token = "0x17000908")]
		public bool isEmpty
		{
			[Token(Token = "0x60021B0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000909")]
		public abstract Func<T, T, bool> SameFunc
		{
			[Token(Token = "0x60021B1")]
			get;
		}

		[Token(Token = "0x60021B2")]
		protected virtual bool ConvertUnits(VisualElement owner, StylePropertyId prop, ref T a, ref T b)
		{
			return default(bool);
		}

		[Token(Token = "0x60021B3")]
		protected virtual T Copy(T value)
		{
			return (T)null;
		}

		[Token(Token = "0x60021B4")]
		protected Values()
		{
		}

		[Token(Token = "0x60021B5")]
		private void SwapFrameStates()
		{
		}

		[Token(Token = "0x60021B6")]
		private void QueueEvent(EventBase evt, ElementPropertyPair epp)
		{
		}

		[Token(Token = "0x60021B7")]
		private void ClearEventQueue(ElementPropertyPair epp)
		{
		}

		[Token(Token = "0x60021B8")]
		private void QueueTransitionRunEvent(VisualElement ve, int runningIndex)
		{
		}

		[Token(Token = "0x60021B9")]
		private void QueueTransitionStartEvent(VisualElement ve, int runningIndex)
		{
		}

		[Token(Token = "0x60021BA")]
		private void QueueTransitionEndEvent(VisualElement ve, int runningIndex)
		{
		}

		[Token(Token = "0x60021BB")]
		private void QueueTransitionCancelEvent(VisualElement ve, int runningIndex, double panelElapsed)
		{
		}

		[Token(Token = "0x60021BC")]
		private void SendTransitionCancelEvent(VisualElement ve, int runningIndex, double panelElapsed)
		{
		}

		[Token(Token = "0x60021BD")]
		public sealed override void CancelAllAnimations()
		{
		}

		[Token(Token = "0x60021BE")]
		public sealed override void CancelAllAnimations(VisualElement ve)
		{
		}

		[Token(Token = "0x60021BF")]
		public sealed override void CancelAnimation(VisualElement ve, StylePropertyId id)
		{
		}

		[Token(Token = "0x60021C0")]
		public sealed override void UpdateAnimation(VisualElement ve, StylePropertyId id)
		{
		}

		[Token(Token = "0x60021C1")]
		public sealed override void GetAllAnimations(VisualElement ve, List<StylePropertyId> outPropertyIds)
		{
		}

		[Token(Token = "0x60021C2")]
		private float ComputeReversingShorteningFactor(int oldIndex)
		{
			return default(float);
		}

		[Token(Token = "0x60021C3")]
		private float ComputeReversingDuration(float newTransitionDuration, float newReversingShorteningFactor)
		{
			return default(float);
		}

		[Token(Token = "0x60021C4")]
		private float ComputeReversingDelay(float delay, float newReversingShorteningFactor)
		{
			return default(float);
		}

		[Token(Token = "0x60021C5")]
		public bool StartTransition(VisualElement owner, StylePropertyId prop, T startValue, T endValue, float duration, float delay, Func<float, float> easingCurve, double currentTime)
		{
			return default(bool);
		}

		[Token(Token = "0x60021C6")]
		private void ForceComputedStyleEndValue(int runningIndex)
		{
		}

		[Token(Token = "0x60021C7")]
		public sealed override void Update(double currentTime)
		{
		}

		[Token(Token = "0x60021C8")]
		private void ProcessEventQueue()
		{
		}

		[Token(Token = "0x60021C9")]
		private void UpdateProgress(double currentTime)
		{
		}
	}

	[Token(Token = "0x200045C")]
	private class ValuesFloat : Values<float>
	{
		[Token(Token = "0x1700090A")]
		public override Func<float, float, bool> SameFunc
		{
			[Token(Token = "0x60021D5")]
			[Address(RVA = "0x6B18740", Offset = "0x6B17740", VA = "0x6B18740", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60021D6")]
		[Address(RVA = "0x6B18750", Offset = "0x6B17750", VA = "0x6B18750")]
		private static bool IsSame(float a, float b)
		{
			return default(bool);
		}

		[Token(Token = "0x60021D7")]
		[Address(RVA = "0x6B187E0", Offset = "0x6B177E0", VA = "0x6B187E0")]
		private static void Lerp(float a, float b, ref float result, float t)
		{
		}

		[Token(Token = "0x60021D8")]
		[Address(RVA = "0x6B18800", Offset = "0x6B17800", VA = "0x6B18800", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x60021D9")]
		[Address(RVA = "0x6B18880", Offset = "0x6B17880", VA = "0x6B18880", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x60021DA")]
		[Address(RVA = "0x6B18930", Offset = "0x6B17930", VA = "0x6B18930", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x60021DB")]
		[Address(RVA = "0x6B189B0", Offset = "0x6B179B0", VA = "0x6B189B0")]
		public ValuesFloat()
		{
		}
	}

	[Token(Token = "0x200045D")]
	private class ValuesInt : Values<int>
	{
		[Token(Token = "0x1700090B")]
		public override Func<int, int, bool> SameFunc
		{
			[Token(Token = "0x60021DC")]
			[Address(RVA = "0x6B18A50", Offset = "0x6B17A50", VA = "0x6B18A50", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60021DD")]
		[Address(RVA = "0x6B18A60", Offset = "0x6B17A60", VA = "0x6B18A60")]
		private static bool IsSame(int a, int b)
		{
			return default(bool);
		}

		[Token(Token = "0x60021DE")]
		[Address(RVA = "0x6B18A70", Offset = "0x6B17A70", VA = "0x6B18A70")]
		private static int Lerp(int a, int b, float t)
		{
			return default(int);
		}

		[Token(Token = "0x60021DF")]
		[Address(RVA = "0x6B18BA0", Offset = "0x6B17BA0", VA = "0x6B18BA0", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x60021E0")]
		[Address(RVA = "0x6B18C40", Offset = "0x6B17C40", VA = "0x6B18C40", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x60021E1")]
		[Address(RVA = "0x6B18CF0", Offset = "0x6B17CF0", VA = "0x6B18CF0", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x60021E2")]
		[Address(RVA = "0x6B18D70", Offset = "0x6B17D70", VA = "0x6B18D70")]
		public ValuesInt()
		{
		}
	}

	[Token(Token = "0x200045E")]
	private class ValuesLength : Values<Length>
	{
		[Token(Token = "0x1700090C")]
		public override Func<Length, Length, bool> SameFunc
		{
			[Token(Token = "0x60021E3")]
			[Address(RVA = "0x6B18E10", Offset = "0x6B17E10", VA = "0x6B18E10", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60021E4")]
		[Address(RVA = "0x6B18E20", Offset = "0x6B17E20", VA = "0x6B18E20")]
		private static bool IsSame(Length a, Length b)
		{
			return default(bool);
		}

		[Token(Token = "0x60021E5")]
		[Address(RVA = "0x6B18ED0", Offset = "0x6B17ED0", VA = "0x6B18ED0", Slot = "14")]
		protected sealed override bool ConvertUnits(VisualElement owner, StylePropertyId prop, ref Length a, ref Length b)
		{
			return default(bool);
		}

		[Token(Token = "0x60021E6")]
		[Address(RVA = "0x6B18F00", Offset = "0x6B17F00", VA = "0x6B18F00")]
		internal static Length Lerp(Length a, Length b, float t)
		{
			return default(Length);
		}

		[Token(Token = "0x60021E7")]
		[Address(RVA = "0x6B18F50", Offset = "0x6B17F50", VA = "0x6B18F50", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x60021E8")]
		[Address(RVA = "0x6B19010", Offset = "0x6B18010", VA = "0x6B19010", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x60021E9")]
		[Address(RVA = "0x6B190C0", Offset = "0x6B180C0", VA = "0x6B190C0", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x60021EA")]
		[Address(RVA = "0x6B19140", Offset = "0x6B18140", VA = "0x6B19140")]
		public ValuesLength()
		{
		}
	}

	[Token(Token = "0x200045F")]
	private class ValuesColor : Values<Color>
	{
		[Token(Token = "0x1700090D")]
		public override Func<Color, Color, bool> SameFunc
		{
			[Token(Token = "0x60021EB")]
			[Address(RVA = "0x6B191E0", Offset = "0x6B181E0", VA = "0x6B191E0", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60021EC")]
		[Address(RVA = "0x6B191F0", Offset = "0x6B181F0", VA = "0x6B191F0")]
		private static bool IsSame(Color c, Color d)
		{
			return default(bool);
		}

		[Token(Token = "0x60021ED")]
		[Address(RVA = "0x6B19330", Offset = "0x6B18330", VA = "0x6B19330")]
		private static Color Lerp(Color a, Color b, float t)
		{
			return default(Color);
		}

		[Token(Token = "0x60021EE")]
		[Address(RVA = "0x6B19350", Offset = "0x6B18350", VA = "0x6B19350", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x60021EF")]
		[Address(RVA = "0x6B193F0", Offset = "0x6B183F0", VA = "0x6B193F0", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x60021F0")]
		[Address(RVA = "0x6B194A0", Offset = "0x6B184A0", VA = "0x6B194A0", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x60021F1")]
		[Address(RVA = "0x6B19530", Offset = "0x6B18530", VA = "0x6B19530")]
		public ValuesColor()
		{
		}
	}

	[Token(Token = "0x2000460")]
	private abstract class ValuesDiscrete<T> : Values<T>
	{
		[Token(Token = "0x1700090E")]
		public override Func<T, T, bool> SameFunc
		{
			[Token(Token = "0x60021F2")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60021F3")]
		private static bool IsSame(T a, T b)
		{
			return default(bool);
		}

		[Token(Token = "0x60021F4")]
		private static T Lerp(T a, T b, float t)
		{
			return (T)null;
		}

		[Token(Token = "0x60021F5")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x60021F6")]
		protected ValuesDiscrete()
		{
		}
	}

	[Token(Token = "0x2000461")]
	private class ValuesEnum : ValuesDiscrete<int>
	{
		[Token(Token = "0x60021F7")]
		[Address(RVA = "0x6B195D0", Offset = "0x6B185D0", VA = "0x6B195D0", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x60021F8")]
		[Address(RVA = "0x6B19680", Offset = "0x6B18680", VA = "0x6B19680", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x60021F9")]
		[Address(RVA = "0x6B19700", Offset = "0x6B18700", VA = "0x6B19700")]
		public ValuesEnum()
		{
		}
	}

	[Token(Token = "0x2000462")]
	private class ValuesBackground : ValuesDiscrete<Background>
	{
		[Token(Token = "0x60021FA")]
		[Address(RVA = "0x6B19740", Offset = "0x6B18740", VA = "0x6B19740", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x60021FB")]
		[Address(RVA = "0x6B19830", Offset = "0x6B18830", VA = "0x6B19830", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x60021FC")]
		[Address(RVA = "0x6B198F0", Offset = "0x6B188F0", VA = "0x6B198F0")]
		public ValuesBackground()
		{
		}
	}

	[Token(Token = "0x2000463")]
	private class ValuesFontDefinition : ValuesDiscrete<FontDefinition>
	{
		[Token(Token = "0x60021FD")]
		[Address(RVA = "0x6B19930", Offset = "0x6B18930", VA = "0x6B19930", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x60021FE")]
		[Address(RVA = "0x6B199E0", Offset = "0x6B189E0", VA = "0x6B199E0", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x60021FF")]
		[Address(RVA = "0x6B19A70", Offset = "0x6B18A70", VA = "0x6B19A70")]
		public ValuesFontDefinition()
		{
		}
	}

	[Token(Token = "0x2000464")]
	private class ValuesFont : ValuesDiscrete<Font>
	{
		[Token(Token = "0x6002200")]
		[Address(RVA = "0x6B19AB0", Offset = "0x6B18AB0", VA = "0x6B19AB0", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x6002201")]
		[Address(RVA = "0x6B19B60", Offset = "0x6B18B60", VA = "0x6B19B60", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x6002202")]
		[Address(RVA = "0x6B19BE0", Offset = "0x6B18BE0", VA = "0x6B19BE0")]
		public ValuesFont()
		{
		}
	}

	[Token(Token = "0x2000465")]
	private class ValuesTextShadow : Values<TextShadow>
	{
		[Token(Token = "0x1700090F")]
		public override Func<TextShadow, TextShadow, bool> SameFunc
		{
			[Token(Token = "0x6002203")]
			[Address(RVA = "0x6B19C20", Offset = "0x6B18C20", VA = "0x6B19C20", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002204")]
		[Address(RVA = "0x6B19C30", Offset = "0x6B18C30", VA = "0x6B19C30")]
		private static bool IsSame(TextShadow a, TextShadow b)
		{
			return default(bool);
		}

		[Token(Token = "0x6002205")]
		[Address(RVA = "0x6B19C40", Offset = "0x6B18C40", VA = "0x6B19C40")]
		private static TextShadow Lerp(TextShadow a, TextShadow b, float t)
		{
			return default(TextShadow);
		}

		[Token(Token = "0x6002206")]
		[Address(RVA = "0x6B19CA0", Offset = "0x6B18CA0", VA = "0x6B19CA0", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x6002207")]
		[Address(RVA = "0x6B19DC0", Offset = "0x6B18DC0", VA = "0x6B19DC0", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x6002208")]
		[Address(RVA = "0x6B19EC0", Offset = "0x6B18EC0", VA = "0x6B19EC0", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x6002209")]
		[Address(RVA = "0x6B19F90", Offset = "0x6B18F90", VA = "0x6B19F90")]
		public ValuesTextShadow()
		{
		}
	}

	[Token(Token = "0x2000466")]
	private class ValuesScale : Values<Scale>
	{
		[Token(Token = "0x17000910")]
		public override Func<Scale, Scale, bool> SameFunc
		{
			[Token(Token = "0x600220A")]
			[Address(RVA = "0x6B1A030", Offset = "0x6B19030", VA = "0x6B1A030", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600220B")]
		[Address(RVA = "0x6B1A040", Offset = "0x6B19040", VA = "0x6B1A040")]
		private static bool IsSame(Scale a, Scale b)
		{
			return default(bool);
		}

		[Token(Token = "0x600220C")]
		[Address(RVA = "0x6B1A090", Offset = "0x6B19090", VA = "0x6B1A090", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x600220D")]
		[Address(RVA = "0x6B1A140", Offset = "0x6B19140", VA = "0x6B1A140", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x600220E")]
		[Address(RVA = "0x6B1A1D0", Offset = "0x6B191D0", VA = "0x6B1A1D0")]
		private static Scale Lerp(Scale a, Scale b, float t)
		{
			return default(Scale);
		}

		[Token(Token = "0x600220F")]
		[Address(RVA = "0x6B1A200", Offset = "0x6B19200", VA = "0x6B1A200", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x6002210")]
		[Address(RVA = "0x6B1A2B0", Offset = "0x6B192B0", VA = "0x6B1A2B0")]
		public ValuesScale()
		{
		}
	}

	[Token(Token = "0x2000467")]
	private class ValuesRotate : Values<Rotate>
	{
		[Token(Token = "0x17000911")]
		public override Func<Rotate, Rotate, bool> SameFunc
		{
			[Token(Token = "0x6002211")]
			[Address(RVA = "0x6B1A350", Offset = "0x6B19350", VA = "0x6B1A350", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002212")]
		[Address(RVA = "0x6B1A360", Offset = "0x6B19360", VA = "0x6B1A360")]
		private static bool IsSame(Rotate a, Rotate b)
		{
			return default(bool);
		}

		[Token(Token = "0x6002213")]
		[Address(RVA = "0x6B1A460", Offset = "0x6B19460", VA = "0x6B1A460", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x6002214")]
		[Address(RVA = "0x6B1A550", Offset = "0x6B19550", VA = "0x6B1A550", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x6002215")]
		[Address(RVA = "0x6B1A610", Offset = "0x6B19610", VA = "0x6B1A610")]
		private static Rotate Lerp(Rotate a, Rotate b, float t)
		{
			return default(Rotate);
		}

		[Token(Token = "0x6002216")]
		[Address(RVA = "0x6B1A6E0", Offset = "0x6B196E0", VA = "0x6B1A6E0", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x6002217")]
		[Address(RVA = "0x6B1A870", Offset = "0x6B19870", VA = "0x6B1A870")]
		public ValuesRotate()
		{
		}
	}

	[Token(Token = "0x2000468")]
	private class ValuesRatio : Values<Ratio>
	{
		[Token(Token = "0x17000912")]
		public override Func<Ratio, Ratio, bool> SameFunc
		{
			[Token(Token = "0x6002218")]
			[Address(RVA = "0x6B1A910", Offset = "0x6B19910", VA = "0x6B1A910", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002219")]
		[Address(RVA = "0x6B1A920", Offset = "0x6B19920", VA = "0x6B1A920")]
		private static bool IsSame(Ratio a, Ratio b)
		{
			return default(bool);
		}

		[Token(Token = "0x600221A")]
		[Address(RVA = "0x6B1A960", Offset = "0x6B19960", VA = "0x6B1A960", Slot = "14")]
		protected sealed override bool ConvertUnits(VisualElement owner, StylePropertyId prop, ref Ratio a, ref Ratio b)
		{
			return default(bool);
		}

		[Token(Token = "0x600221B")]
		[Address(RVA = "0x6B1AC10", Offset = "0x6B19C10", VA = "0x6B1AC10", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x600221C")]
		[Address(RVA = "0x6B1ACC0", Offset = "0x6B19CC0", VA = "0x6B1ACC0", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x600221D")]
		[Address(RVA = "0x6B1AD40", Offset = "0x6B19D40", VA = "0x6B1AD40")]
		private static Ratio Lerp(Ratio a, Ratio b, float t)
		{
			return default(Ratio);
		}

		[Token(Token = "0x600221E")]
		[Address(RVA = "0x6B1AD50", Offset = "0x6B19D50", VA = "0x6B1AD50", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x600221F")]
		[Address(RVA = "0x6B1ADD0", Offset = "0x6B19DD0", VA = "0x6B1ADD0")]
		public ValuesRatio()
		{
		}
	}

	[Token(Token = "0x2000469")]
	private class ValuesTranslate : Values<Translate>
	{
		[Token(Token = "0x17000913")]
		public override Func<Translate, Translate, bool> SameFunc
		{
			[Token(Token = "0x6002220")]
			[Address(RVA = "0x6B1AE70", Offset = "0x6B19E70", VA = "0x6B1AE70", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002221")]
		[Address(RVA = "0x6B1AE80", Offset = "0x6B19E80", VA = "0x6B1AE80")]
		private static bool IsSame(Translate a, Translate b)
		{
			return default(bool);
		}

		[Token(Token = "0x6002222")]
		[Address(RVA = "0x6B1AEE0", Offset = "0x6B19EE0", VA = "0x6B1AEE0", Slot = "14")]
		protected sealed override bool ConvertUnits(VisualElement owner, StylePropertyId prop, ref Translate a, ref Translate b)
		{
			return default(bool);
		}

		[Token(Token = "0x6002223")]
		[Address(RVA = "0x6B1AF00", Offset = "0x6B19F00", VA = "0x6B1AF00", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x6002224")]
		[Address(RVA = "0x6B1AFF0", Offset = "0x6B19FF0", VA = "0x6B1AFF0", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x6002225")]
		[Address(RVA = "0x6B1B0B0", Offset = "0x6B1A0B0", VA = "0x6B1B0B0")]
		private static Translate Lerp(Translate a, Translate b, float t)
		{
			return default(Translate);
		}

		[Token(Token = "0x6002226")]
		[Address(RVA = "0x6B1B150", Offset = "0x6B1A150", VA = "0x6B1B150", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x6002227")]
		[Address(RVA = "0x6B1B280", Offset = "0x6B1A280", VA = "0x6B1B280")]
		public ValuesTranslate()
		{
		}
	}

	[Token(Token = "0x200046A")]
	private class ValuesTransformOrigin : Values<TransformOrigin>
	{
		[Token(Token = "0x17000914")]
		public override Func<TransformOrigin, TransformOrigin, bool> SameFunc
		{
			[Token(Token = "0x6002228")]
			[Address(RVA = "0x6B1B320", Offset = "0x6B1A320", VA = "0x6B1B320", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002229")]
		[Address(RVA = "0x6B1B330", Offset = "0x6B1A330", VA = "0x6B1B330")]
		private static bool IsSame(TransformOrigin a, TransformOrigin b)
		{
			return default(bool);
		}

		[Token(Token = "0x600222A")]
		[Address(RVA = "0x6B1B390", Offset = "0x6B1A390", VA = "0x6B1B390", Slot = "14")]
		protected sealed override bool ConvertUnits(VisualElement owner, StylePropertyId prop, ref TransformOrigin a, ref TransformOrigin b)
		{
			return default(bool);
		}

		[Token(Token = "0x600222B")]
		[Address(RVA = "0x6B1B3B0", Offset = "0x6B1A3B0", VA = "0x6B1B3B0", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x600222C")]
		[Address(RVA = "0x6B1B4A0", Offset = "0x6B1A4A0", VA = "0x6B1B4A0", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x600222D")]
		[Address(RVA = "0x6B1B560", Offset = "0x6B1A560", VA = "0x6B1B560")]
		private static TransformOrigin Lerp(TransformOrigin a, TransformOrigin b, float t)
		{
			return default(TransformOrigin);
		}

		[Token(Token = "0x600222E")]
		[Address(RVA = "0x6B1B5F0", Offset = "0x6B1A5F0", VA = "0x6B1B5F0", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x600222F")]
		[Address(RVA = "0x6B1B700", Offset = "0x6B1A700", VA = "0x6B1B700")]
		public ValuesTransformOrigin()
		{
		}
	}

	[Token(Token = "0x200046B")]
	private class ValuesBackgroundPosition : ValuesDiscrete<BackgroundPosition>
	{
		[Token(Token = "0x6002230")]
		[Address(RVA = "0x6B1B7A0", Offset = "0x6B1A7A0", VA = "0x6B1B7A0", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x6002231")]
		[Address(RVA = "0x6B1B850", Offset = "0x6B1A850", VA = "0x6B1B850", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x6002232")]
		[Address(RVA = "0x6B1B8E0", Offset = "0x6B1A8E0", VA = "0x6B1B8E0")]
		public ValuesBackgroundPosition()
		{
		}
	}

	[Token(Token = "0x200046C")]
	private class ValuesBackgroundRepeat : ValuesDiscrete<BackgroundRepeat>
	{
		[Token(Token = "0x6002233")]
		[Address(RVA = "0x6B1B920", Offset = "0x6B1A920", VA = "0x6B1B920", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x6002234")]
		[Address(RVA = "0x6B1B9D0", Offset = "0x6B1A9D0", VA = "0x6B1B9D0", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x6002235")]
		[Address(RVA = "0x6B1BA50", Offset = "0x6B1AA50", VA = "0x6B1BA50")]
		public ValuesBackgroundRepeat()
		{
		}
	}

	[Token(Token = "0x200046D")]
	private class ValuesBackgroundSize : Values<BackgroundSize>
	{
		[Token(Token = "0x17000915")]
		public override Func<BackgroundSize, BackgroundSize, bool> SameFunc
		{
			[Token(Token = "0x6002236")]
			[Address(RVA = "0x6B1BA90", Offset = "0x6B1AA90", VA = "0x6B1BA90", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002237")]
		[Address(RVA = "0x6B1BAA0", Offset = "0x6B1AAA0", VA = "0x6B1BAA0")]
		private static bool IsSame(BackgroundSize a, BackgroundSize b)
		{
			return default(bool);
		}

		[Token(Token = "0x6002238")]
		[Address(RVA = "0x6B1BAB0", Offset = "0x6B1AAB0", VA = "0x6B1BAB0", Slot = "14")]
		protected sealed override bool ConvertUnits(VisualElement owner, StylePropertyId prop, ref BackgroundSize a, ref BackgroundSize b)
		{
			return default(bool);
		}

		[Token(Token = "0x6002239")]
		[Address(RVA = "0x6B1BAD0", Offset = "0x6B1AAD0", VA = "0x6B1BAD0", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x600223A")]
		[Address(RVA = "0x6B1BBC0", Offset = "0x6B1ABC0", VA = "0x6B1BBC0", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x600223B")]
		[Address(RVA = "0x6B1BC80", Offset = "0x6B1AC80", VA = "0x6B1BC80")]
		private static BackgroundSize Lerp(BackgroundSize a, BackgroundSize b, float t)
		{
			return default(BackgroundSize);
		}

		[Token(Token = "0x600223C")]
		[Address(RVA = "0x6B1BD90", Offset = "0x6B1AD90", VA = "0x6B1BD90", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x600223D")]
		[Address(RVA = "0x6B1BF80", Offset = "0x6B1AF80", VA = "0x6B1BF80")]
		public ValuesBackgroundSize()
		{
		}
	}

	[Token(Token = "0x200046E")]
	private class ValuesListFilterFunction : Values<List<FilterFunction>>
	{
		[Token(Token = "0x17000916")]
		public override Func<List<FilterFunction>, List<FilterFunction>, bool> SameFunc
		{
			[Token(Token = "0x600223F")]
			[Address(RVA = "0x6B1C090", Offset = "0x6B1B090", VA = "0x6B1C090", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600223E")]
		[Address(RVA = "0x6B1C020", Offset = "0x6B1B020", VA = "0x6B1C020", Slot = "15")]
		protected override List<FilterFunction> Copy(List<FilterFunction> value)
		{
			return null;
		}

		[Token(Token = "0x6002240")]
		[Address(RVA = "0x6B1C0A0", Offset = "0x6B1B0A0", VA = "0x6B1C0A0")]
		private static bool IsSame(List<FilterFunction> a, List<FilterFunction> b)
		{
			return default(bool);
		}

		[Token(Token = "0x6002241")]
		[Address(RVA = "0x6B1C250", Offset = "0x6B1B250", VA = "0x6B1C250", Slot = "14")]
		protected sealed override bool ConvertUnits(VisualElement owner, StylePropertyId prop, ref List<FilterFunction> a, ref List<FilterFunction> b)
		{
			return default(bool);
		}

		[Token(Token = "0x6002242")]
		[Address(RVA = "0x6B1C4A0", Offset = "0x6B1B4A0", VA = "0x6B1C4A0")]
		private static bool AreFilterDefinitionsCompatible(FilterFunctionDefinition filterDef1, FilterFunctionDefinition filterDef2)
		{
			return default(bool);
		}

		[Token(Token = "0x6002243")]
		[Address(RVA = "0x6B1C530", Offset = "0x6B1B530", VA = "0x6B1C530", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x6002244")]
		[Address(RVA = "0x6B1C5E0", Offset = "0x6B1B5E0", VA = "0x6B1C5E0", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x6002245")]
		[Address(RVA = "0x6B1C660", Offset = "0x6B1B660", VA = "0x6B1C660")]
		private static FilterParameter LerpFilterParameters(FilterParameter a, FilterParameter b, float t)
		{
			return default(FilterParameter);
		}

		[Token(Token = "0x6002246")]
		[Address(RVA = "0x6B1C720", Offset = "0x6B1B720", VA = "0x6B1C720")]
		private static void Lerp(List<FilterFunction> a, List<FilterFunction> b, ref List<FilterFunction> result, float t)
		{
		}

		[Token(Token = "0x6002247")]
		[Address(RVA = "0x6B1D2D0", Offset = "0x6B1C2D0", VA = "0x6B1D2D0")]
		private static FilterFunction GetFunctionOrDefault(ref List<FilterFunction> srcList, ref List<FilterFunction> refList, int index)
		{
			return default(FilterFunction);
		}

		[Token(Token = "0x6002248")]
		[Address(RVA = "0x6B1D590", Offset = "0x6B1C590", VA = "0x6B1D590", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x6002249")]
		[Address(RVA = "0x6B1D620", Offset = "0x6B1C620", VA = "0x6B1D620")]
		public ValuesListFilterFunction()
		{
		}
	}

	[Token(Token = "0x200046F")]
	private class ValuesMaterialDefinition : Values<MaterialDefinition>
	{
		[Token(Token = "0x17000917")]
		public override Func<MaterialDefinition, MaterialDefinition, bool> SameFunc
		{
			[Token(Token = "0x600224B")]
			[Address(RVA = "0x6B1D6F0", Offset = "0x6B1C6F0", VA = "0x6B1D6F0", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600224A")]
		[Address(RVA = "0x6B1D6C0", Offset = "0x6B1C6C0", VA = "0x6B1D6C0", Slot = "15")]
		protected override MaterialDefinition Copy(MaterialDefinition value)
		{
			return default(MaterialDefinition);
		}

		[Token(Token = "0x600224C")]
		[Address(RVA = "0x6B1D700", Offset = "0x6B1C700", VA = "0x6B1D700")]
		private static bool IsSame(MaterialDefinition a, MaterialDefinition b)
		{
			return default(bool);
		}

		[Token(Token = "0x600224D")]
		[Address(RVA = "0x6B1DAA0", Offset = "0x6B1CAA0", VA = "0x6B1DAA0", Slot = "14")]
		protected sealed override bool ConvertUnits(VisualElement owner, StylePropertyId prop, ref MaterialDefinition a, ref MaterialDefinition b)
		{
			return default(bool);
		}

		[Token(Token = "0x600224E")]
		[Address(RVA = "0x6B1DD10", Offset = "0x6B1CD10", VA = "0x6B1DD10", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x600224F")]
		[Address(RVA = "0x6B1DDC0", Offset = "0x6B1CDC0", VA = "0x6B1DDC0", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x6002250")]
		[Address(RVA = "0x6B1DE50", Offset = "0x6B1CE50", VA = "0x6B1DE50")]
		private static MaterialPropertyValue LerpPropertyValues(MaterialPropertyValue a, MaterialPropertyValue b, float t)
		{
			return default(MaterialPropertyValue);
		}

		[Token(Token = "0x6002251")]
		[Address(RVA = "0x6B1DF80", Offset = "0x6B1CF80", VA = "0x6B1DF80")]
		private static MaterialPropertyValue GetValueOrDefault(List<MaterialPropertyValue> srcList, List<MaterialPropertyValue> refList, int index)
		{
			return default(MaterialPropertyValue);
		}

		[Token(Token = "0x6002252")]
		[Address(RVA = "0x6B1E0F0", Offset = "0x6B1D0F0", VA = "0x6B1E0F0")]
		private static void Lerp(MaterialDefinition a, MaterialDefinition b, ref MaterialDefinition result, float t)
		{
		}

		[Token(Token = "0x6002253")]
		[Address(RVA = "0x6B1E660", Offset = "0x6B1D660", VA = "0x6B1E660", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x6002254")]
		[Address(RVA = "0x6B1E700", Offset = "0x6B1D700", VA = "0x6B1E700")]
		public ValuesMaterialDefinition()
		{
		}
	}

	[Token(Token = "0x4000E5A")]
	[FieldOffset(Offset = "0x10")]
	private double m_CurrentTime;

	[Token(Token = "0x4000E5B")]
	[FieldOffset(Offset = "0x18")]
	private ValuesFloat m_Floats;

	[Token(Token = "0x4000E5C")]
	[FieldOffset(Offset = "0x20")]
	private ValuesInt m_Ints;

	[Token(Token = "0x4000E5D")]
	[FieldOffset(Offset = "0x28")]
	private ValuesLength m_Lengths;

	[Token(Token = "0x4000E5E")]
	[FieldOffset(Offset = "0x30")]
	private ValuesColor m_Colors;

	[Token(Token = "0x4000E5F")]
	[FieldOffset(Offset = "0x38")]
	private ValuesEnum m_Enums;

	[Token(Token = "0x4000E60")]
	[FieldOffset(Offset = "0x40")]
	private ValuesBackground m_Backgrounds;

	[Token(Token = "0x4000E61")]
	[FieldOffset(Offset = "0x48")]
	private ValuesFontDefinition m_FontDefinitions;

	[Token(Token = "0x4000E62")]
	[FieldOffset(Offset = "0x50")]
	private ValuesFont m_Fonts;

	[Token(Token = "0x4000E63")]
	[FieldOffset(Offset = "0x58")]
	private ValuesTextShadow m_TextShadows;

	[Token(Token = "0x4000E64")]
	[FieldOffset(Offset = "0x60")]
	private ValuesScale m_Scale;

	[Token(Token = "0x4000E65")]
	[FieldOffset(Offset = "0x68")]
	private ValuesRotate m_Rotate;

	[Token(Token = "0x4000E66")]
	[FieldOffset(Offset = "0x70")]
	private ValuesRatio m_Ratio;

	[Token(Token = "0x4000E67")]
	[FieldOffset(Offset = "0x78")]
	private ValuesTranslate m_Translate;

	[Token(Token = "0x4000E68")]
	[FieldOffset(Offset = "0x80")]
	private ValuesTransformOrigin m_TransformOrigin;

	[Token(Token = "0x4000E69")]
	[FieldOffset(Offset = "0x88")]
	private ValuesBackgroundPosition m_BackgroundPosition;

	[Token(Token = "0x4000E6A")]
	[FieldOffset(Offset = "0x90")]
	private ValuesBackgroundRepeat m_BackgroundRepeat;

	[Token(Token = "0x4000E6B")]
	[FieldOffset(Offset = "0x98")]
	private ValuesBackgroundSize m_BackgroundSize;

	[Token(Token = "0x4000E6C")]
	[FieldOffset(Offset = "0xA0")]
	private ValuesListFilterFunction m_FilterFunctions;

	[Token(Token = "0x4000E6D")]
	[FieldOffset(Offset = "0xA8")]
	private ValuesMaterialDefinition m_MaterialDefinition;

	[Token(Token = "0x4000E6E")]
	[FieldOffset(Offset = "0xB0")]
	private readonly List<Values> m_AllValues;

	[Token(Token = "0x4000E6F")]
	[FieldOffset(Offset = "0xB8")]
	private readonly Dictionary<StylePropertyId, Values> m_PropertyToValues;

	[Token(Token = "0x6002178")]
	[Address(RVA = "0x6B17060", Offset = "0x6B16060", VA = "0x6B17060")]
	public StylePropertyAnimationSystem(BaseVisualElementPanel p)
	{
	}

	[Token(Token = "0x6002179")]
	private T GetOrCreate<T>(ref T values) where T : new()
	{
		return (T)null;
	}

	[Token(Token = "0x600217A")]
	private bool StartTransition<T>(VisualElement owner, StylePropertyId prop, T startValue, T endValue, int durationMs, int delayMs, Func<float, float> easingCurve, Values<T> values)
	{
		return default(bool);
	}

	[Token(Token = "0x600217B")]
	[Address(RVA = "0x6B17160", Offset = "0x6B16160", VA = "0x6B17160", Slot = "4")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, float startValue, float endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x600217C")]
	[Address(RVA = "0x6B17210", Offset = "0x6B16210", VA = "0x6B17210", Slot = "5")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, int startValue, int endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x600217D")]
	[Address(RVA = "0x6B172B0", Offset = "0x6B162B0", VA = "0x6B172B0", Slot = "6")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, Length startValue, Length endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x600217E")]
	[Address(RVA = "0x6B17350", Offset = "0x6B16350", VA = "0x6B17350", Slot = "7")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, Color startValue, Color endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x600217F")]
	[Address(RVA = "0x6B17410", Offset = "0x6B16410", VA = "0x6B17410", Slot = "8")]
	public bool StartTransitionEnum(VisualElement owner, StylePropertyId prop, int startValue, int endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6002180")]
	[Address(RVA = "0x6B174B0", Offset = "0x6B164B0", VA = "0x6B174B0", Slot = "9")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, Background startValue, Background endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6002181")]
	[Address(RVA = "0x6B17580", Offset = "0x6B16580", VA = "0x6B17580", Slot = "10")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, FontDefinition startValue, FontDefinition endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6002182")]
	[Address(RVA = "0x6B17640", Offset = "0x6B16640", VA = "0x6B17640", Slot = "11")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, Font startValue, Font endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6002183")]
	[Address(RVA = "0x6B176E0", Offset = "0x6B166E0", VA = "0x6B176E0", Slot = "12")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, TextShadow startValue, TextShadow endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6002184")]
	[Address(RVA = "0x6B177B0", Offset = "0x6B167B0", VA = "0x6B177B0", Slot = "13")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, Scale startValue, Scale endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6002185")]
	[Address(RVA = "0x6B17860", Offset = "0x6B16860", VA = "0x6B17860", Slot = "16")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, Rotate startValue, Rotate endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6002186")]
	[Address(RVA = "0x6B17930", Offset = "0x6B16930", VA = "0x6B17930", Slot = "15")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, Translate startValue, Translate endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6002187")]
	[Address(RVA = "0x6B17A00", Offset = "0x6B16A00", VA = "0x6B17A00", Slot = "17")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, Ratio startValue, Ratio endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6002188")]
	[Address(RVA = "0x6B17AB0", Offset = "0x6B16AB0", VA = "0x6B17AB0", Slot = "14")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, TransformOrigin startValue, TransformOrigin endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6002189")]
	[Address(RVA = "0x6B17B80", Offset = "0x6B16B80", VA = "0x6B17B80", Slot = "18")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, BackgroundPosition startValue, BackgroundPosition endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x600218A")]
	[Address(RVA = "0x6B17C30", Offset = "0x6B16C30", VA = "0x6B17C30", Slot = "19")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, BackgroundRepeat startValue, BackgroundRepeat endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x600218B")]
	[Address(RVA = "0x6B17CD0", Offset = "0x6B16CD0", VA = "0x6B17CD0", Slot = "20")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, BackgroundSize startValue, BackgroundSize endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x600218C")]
	[Address(RVA = "0x6B17DA0", Offset = "0x6B16DA0", VA = "0x6B17DA0", Slot = "21")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, List<FilterFunction> startValue, List<FilterFunction> endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x600218D")]
	[Address(RVA = "0x6B17E40", Offset = "0x6B16E40", VA = "0x6B17E40", Slot = "22")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, MaterialDefinition startValue, MaterialDefinition endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x600218E")]
	[Address(RVA = "0x6B17F00", Offset = "0x6B16F00", VA = "0x6B17F00", Slot = "23")]
	public void CancelAllAnimations()
	{
	}

	[Token(Token = "0x600218F")]
	[Address(RVA = "0x6B18040", Offset = "0x6B17040", VA = "0x6B18040", Slot = "24")]
	public void CancelAllAnimations(VisualElement owner)
	{
	}

	[Token(Token = "0x6002190")]
	[Address(RVA = "0x6B18310", Offset = "0x6B17310", VA = "0x6B18310", Slot = "25")]
	public void CancelAnimation(VisualElement owner, StylePropertyId id)
	{
	}

	[Token(Token = "0x6002191")]
	[Address(RVA = "0x6B183A0", Offset = "0x6B173A0", VA = "0x6B183A0", Slot = "26")]
	public void UpdateAnimation(VisualElement owner, StylePropertyId id)
	{
	}

	[Token(Token = "0x6002192")]
	[Address(RVA = "0x6B18430", Offset = "0x6B17430", VA = "0x6B18430", Slot = "27")]
	public void GetAllAnimations(VisualElement owner, List<StylePropertyId> propertyIds)
	{
	}

	[Token(Token = "0x6002193")]
	private void UpdateTracking<T>(Values<T> values)
	{
	}

	[Token(Token = "0x6002194")]
	[Address(RVA = "0x6B18590", Offset = "0x6B17590", VA = "0x6B18590")]
	private double CurrentTimeSeconds()
	{
		return default(double);
	}

	[Token(Token = "0x6002195")]
	[Address(RVA = "0x6B185A0", Offset = "0x6B175A0", VA = "0x6B185A0", Slot = "28")]
	public void Update(double updateTime)
	{
	}
}
