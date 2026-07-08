using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using JetBrains.Annotations;
using UnityEngine.Pool;
using UnityEngine.UIElements.StyleSheets;

namespace UnityEngine.UIElements;

[Token(Token = "0x20003AB")]
internal class StylePropertyAnimationSystem : IStylePropertyAnimationSystem
{
	[Token(Token = "0x20003AC")]
	[Flags]
	private enum TransitionState
	{
		[Token(Token = "0x4000B13")]
		None = 0,
		[Token(Token = "0x4000B14")]
		Running = 1,
		[Token(Token = "0x4000B15")]
		Started = 2,
		[Token(Token = "0x4000B16")]
		Ended = 4,
		[Token(Token = "0x4000B17")]
		Canceled = 8
	}

	[Token(Token = "0x20003AD")]
	private struct AnimationDataSet<TTimingData, TStyleData>
	{
		[Token(Token = "0x4000B18")]
		[FieldOffset(Offset = "0x0")]
		public VisualElement[] elements;

		[Token(Token = "0x4000B19")]
		[FieldOffset(Offset = "0x0")]
		public StylePropertyId[] properties;

		[Token(Token = "0x4000B1A")]
		[FieldOffset(Offset = "0x0")]
		public TTimingData[] timing;

		[Token(Token = "0x4000B1B")]
		[FieldOffset(Offset = "0x0")]
		public TStyleData[] style;

		[Token(Token = "0x4000B1C")]
		[FieldOffset(Offset = "0x0")]
		public int count;

		[Token(Token = "0x4000B1D")]
		[FieldOffset(Offset = "0x0")]
		private Dictionary<ElementPropertyPair, int> indices;

		[Token(Token = "0x17000667")]
		private int capacity
		{
			[Token(Token = "0x600177C")]
			get
			{
				return default(int);
			}
			[Token(Token = "0x600177D")]
			set
			{
			}
		}

		[Token(Token = "0x600177E")]
		private void LocalInit()
		{
		}

		[Token(Token = "0x600177F")]
		public static AnimationDataSet<TTimingData, TStyleData> Create()
		{
			return default(AnimationDataSet<TTimingData, TStyleData>);
		}

		[Token(Token = "0x6001780")]
		public bool IndexOf(VisualElement ve, StylePropertyId prop, out int index)
		{
			return default(bool);
		}

		[Token(Token = "0x6001781")]
		public void Add(VisualElement owner, StylePropertyId prop, TTimingData timingData, TStyleData styleData)
		{
		}

		[Token(Token = "0x6001782")]
		public void Remove(int cancelledIndex)
		{
		}

		[Token(Token = "0x6001783")]
		public void Replace(int index, TTimingData timingData, TStyleData styleData)
		{
		}

		[Token(Token = "0x6001784")]
		public void RemoveAll(VisualElement ve)
		{
		}

		[Token(Token = "0x6001785")]
		public void RemoveAll()
		{
		}

		[Token(Token = "0x6001786")]
		public void GetActivePropertiesForElement(VisualElement ve, List<StylePropertyId> outProperties)
		{
		}
	}

	[Token(Token = "0x20003AE")]
	private struct ElementPropertyPair
	{
		[Token(Token = "0x20003AF")]
		private class EqualityComparer : IEqualityComparer<ElementPropertyPair>
		{
			[Token(Token = "0x6001789")]
			[Address(RVA = "0x4D8BF10", Offset = "0x4D8BF10", VA = "0x4D8BF10", Slot = "4")]
			public bool Equals(ElementPropertyPair x, ElementPropertyPair y)
			{
				return default(bool);
			}

			[Token(Token = "0x600178A")]
			[Address(RVA = "0x4D8BF20", Offset = "0x4D8BF20", VA = "0x4D8BF20", Slot = "5")]
			public int GetHashCode(ElementPropertyPair obj)
			{
				return default(int);
			}

			[Token(Token = "0x600178B")]
			[Address(RVA = "0x4D8BF00", Offset = "0x4D8BF00", VA = "0x4D8BF00")]
			public EqualityComparer()
			{
			}
		}

		[Token(Token = "0x4000B1E")]
		[FieldOffset(Offset = "0x0")]
		public static readonly IEqualityComparer<ElementPropertyPair> Comparer;

		[Token(Token = "0x4000B1F")]
		[FieldOffset(Offset = "0x0")]
		public readonly VisualElement element;

		[Token(Token = "0x4000B20")]
		[FieldOffset(Offset = "0x8")]
		public readonly StylePropertyId property;

		[Token(Token = "0x6001787")]
		[Address(RVA = "0x4D8BE70", Offset = "0x4D8BE70", VA = "0x4D8BE70")]
		public ElementPropertyPair(VisualElement element, StylePropertyId property)
		{
		}
	}

	[Token(Token = "0x20003B0")]
	private abstract class Values
	{
		[Token(Token = "0x600178C")]
		public abstract void CancelAllAnimations();

		[Token(Token = "0x600178D")]
		public abstract void CancelAllAnimations(VisualElement ve);

		[Token(Token = "0x600178E")]
		public abstract void CancelAnimation(VisualElement ve, StylePropertyId id);

		[Token(Token = "0x600178F")]
		public abstract void UpdateAnimation(VisualElement ve, StylePropertyId id);

		[Token(Token = "0x6001790")]
		public abstract void GetAllAnimations(VisualElement ve, List<StylePropertyId> outPropertyIds);

		[Token(Token = "0x6001791")]
		public abstract void Update(long currentTimeMs);

		[Token(Token = "0x6001792")]
		protected abstract void UpdateValues();

		[Token(Token = "0x6001793")]
		protected abstract void UpdateComputedStyle();

		[Token(Token = "0x6001794")]
		protected abstract void UpdateComputedStyle(int i);

		[Token(Token = "0x6001795")]
		[Address(RVA = "0x4D8BF50", Offset = "0x4D8BF50", VA = "0x4D8BF50")]
		protected Values()
		{
		}
	}

	[Token(Token = "0x20003B1")]
	private abstract class Values<T> : Values
	{
		[Token(Token = "0x20003B2")]
		private class TransitionEventsFrameState
		{
			[Token(Token = "0x4000B26")]
			[FieldOffset(Offset = "0x0")]
			private static readonly UnityEngine.Pool.ObjectPool<Queue<EventBase>> k_EventQueuePool;

			[Token(Token = "0x4000B27")]
			[FieldOffset(Offset = "0x0")]
			public readonly Dictionary<ElementPropertyPair, TransitionState> elementPropertyStateDelta;

			[Token(Token = "0x4000B28")]
			[FieldOffset(Offset = "0x0")]
			public readonly Dictionary<ElementPropertyPair, Queue<EventBase>> elementPropertyQueuedEvents;

			[Token(Token = "0x4000B29")]
			[FieldOffset(Offset = "0x0")]
			public IPanel panel;

			[Token(Token = "0x4000B2A")]
			[FieldOffset(Offset = "0x0")]
			private int m_ChangesCount;

			[Token(Token = "0x60017AF")]
			public static Queue<EventBase> GetPooledQueue()
			{
				return null;
			}

			[Token(Token = "0x60017B0")]
			public void RegisterChange()
			{
			}

			[Token(Token = "0x60017B1")]
			public void UnregisterChange()
			{
			}

			[Token(Token = "0x60017B2")]
			public bool StateChanged()
			{
				return default(bool);
			}

			[Token(Token = "0x60017B3")]
			public void Clear()
			{
			}

			[Token(Token = "0x60017B4")]
			public TransitionEventsFrameState()
			{
			}
		}

		[Token(Token = "0x20003B4")]
		public struct TimingData
		{
			[Token(Token = "0x4000B2C")]
			[FieldOffset(Offset = "0x0")]
			public long startTimeMs;

			[Token(Token = "0x4000B2D")]
			[FieldOffset(Offset = "0x0")]
			public int durationMs;

			[Token(Token = "0x4000B2E")]
			[FieldOffset(Offset = "0x0")]
			public Func<float, float> easingCurve;

			[Token(Token = "0x4000B2F")]
			[FieldOffset(Offset = "0x0")]
			public float easedProgress;

			[Token(Token = "0x4000B30")]
			[FieldOffset(Offset = "0x0")]
			public float reversingShorteningFactor;

			[Token(Token = "0x4000B31")]
			[FieldOffset(Offset = "0x0")]
			public bool isStarted;

			[Token(Token = "0x4000B32")]
			[FieldOffset(Offset = "0x0")]
			public int delayMs;
		}

		[Token(Token = "0x20003B5")]
		public struct StyleData
		{
			[Token(Token = "0x4000B33")]
			[FieldOffset(Offset = "0x0")]
			public T startValue;

			[Token(Token = "0x4000B34")]
			[FieldOffset(Offset = "0x0")]
			public T endValue;

			[Token(Token = "0x4000B35")]
			[FieldOffset(Offset = "0x0")]
			public T reversingAdjustedStartValue;

			[Token(Token = "0x4000B36")]
			[FieldOffset(Offset = "0x0")]
			public T currentValue;
		}

		[Token(Token = "0x20003B6")]
		public struct EmptyData
		{
			[Token(Token = "0x4000B37")]
			[FieldOffset(Offset = "0x0")]
			public static EmptyData Default;
		}

		[Token(Token = "0x4000B21")]
		[FieldOffset(Offset = "0x0")]
		private long m_CurrentTimeMs;

		[Token(Token = "0x4000B22")]
		[FieldOffset(Offset = "0x0")]
		private TransitionEventsFrameState m_CurrentFrameEventsState;

		[Token(Token = "0x4000B23")]
		[FieldOffset(Offset = "0x0")]
		private TransitionEventsFrameState m_NextFrameEventsState;

		[Token(Token = "0x4000B24")]
		[FieldOffset(Offset = "0x0")]
		public AnimationDataSet<TimingData, StyleData> running;

		[Token(Token = "0x4000B25")]
		[FieldOffset(Offset = "0x0")]
		public AnimationDataSet<EmptyData, T> completed;

		[Token(Token = "0x17000668")]
		public bool isEmpty
		{
			[Token(Token = "0x6001796")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000669")]
		public abstract Func<T, T, bool> SameFunc
		{
			[Token(Token = "0x6001797")]
			get;
		}

		[Token(Token = "0x6001798")]
		protected virtual bool ConvertUnits(VisualElement owner, StylePropertyId prop, ref T a, ref T b)
		{
			return default(bool);
		}

		[Token(Token = "0x6001799")]
		protected Values()
		{
		}

		[Token(Token = "0x600179A")]
		private void SwapFrameStates()
		{
		}

		[Token(Token = "0x600179B")]
		private void QueueEvent(EventBase evt, ElementPropertyPair epp)
		{
		}

		[Token(Token = "0x600179C")]
		private void ClearEventQueue(ElementPropertyPair epp)
		{
		}

		[Token(Token = "0x600179D")]
		private void QueueTransitionRunEvent(VisualElement ve, int runningIndex)
		{
		}

		[Token(Token = "0x600179E")]
		private void QueueTransitionStartEvent(VisualElement ve, int runningIndex)
		{
		}

		[Token(Token = "0x600179F")]
		private void QueueTransitionEndEvent(VisualElement ve, int runningIndex)
		{
		}

		[Token(Token = "0x60017A0")]
		private void QueueTransitionCancelEvent(VisualElement ve, int runningIndex, long panelElapsedMs)
		{
		}

		[Token(Token = "0x60017A1")]
		private void SendTransitionCancelEvent(VisualElement ve, int runningIndex, long panelElapsedMs)
		{
		}

		[Token(Token = "0x60017A2")]
		public sealed override void CancelAllAnimations()
		{
		}

		[Token(Token = "0x60017A3")]
		public sealed override void CancelAllAnimations(VisualElement ve)
		{
		}

		[Token(Token = "0x60017A4")]
		public sealed override void CancelAnimation(VisualElement ve, StylePropertyId id)
		{
		}

		[Token(Token = "0x60017A5")]
		public sealed override void UpdateAnimation(VisualElement ve, StylePropertyId id)
		{
		}

		[Token(Token = "0x60017A6")]
		public sealed override void GetAllAnimations(VisualElement ve, List<StylePropertyId> outPropertyIds)
		{
		}

		[Token(Token = "0x60017A7")]
		private float ComputeReversingShorteningFactor(int oldIndex)
		{
			return default(float);
		}

		[Token(Token = "0x60017A8")]
		private int ComputeReversingDuration(int newTransitionDurationMs, float newReversingShorteningFactor)
		{
			return default(int);
		}

		[Token(Token = "0x60017A9")]
		private int ComputeReversingDelay(int delayMs, float newReversingShorteningFactor)
		{
			return default(int);
		}

		[Token(Token = "0x60017AA")]
		public bool StartTransition(VisualElement owner, StylePropertyId prop, T startValue, T endValue, int durationMs, int delayMs, Func<float, float> easingCurve, long currentTimeMs)
		{
			return default(bool);
		}

		[Token(Token = "0x60017AB")]
		private void ForceComputedStyleEndValue(int runningIndex)
		{
		}

		[Token(Token = "0x60017AC")]
		public sealed override void Update(long currentTimeMs)
		{
		}

		[Token(Token = "0x60017AD")]
		private void ProcessEventQueue()
		{
		}

		[Token(Token = "0x60017AE")]
		private void UpdateProgress(long currentTimeMs)
		{
		}
	}

	[Token(Token = "0x20003B7")]
	private class ValuesFloat : Values<float>
	{
		[Token(Token = "0x1700066A")]
		public override Func<float, float, bool> SameFunc
		{
			[Token(Token = "0x60017BA")]
			[Address(RVA = "0x4D8BF60", Offset = "0x4D8BF60", VA = "0x4D8BF60", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60017BB")]
		[Address(RVA = "0x4D8BF70", Offset = "0x4D8BF70", VA = "0x4D8BF70")]
		private static bool IsSame(float a, float b)
		{
			return default(bool);
		}

		[Token(Token = "0x60017BC")]
		[Address(RVA = "0x4D8C000", Offset = "0x4D8C000", VA = "0x4D8C000")]
		private static float Lerp(float a, float b, float t)
		{
			return default(float);
		}

		[Token(Token = "0x60017BD")]
		[Address(RVA = "0x4D8C010", Offset = "0x4D8C010", VA = "0x4D8C010", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x60017BE")]
		[Address(RVA = "0x4D8C0A0", Offset = "0x4D8C0A0", VA = "0x4D8C0A0", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x60017BF")]
		[Address(RVA = "0x4D8C150", Offset = "0x4D8C150", VA = "0x4D8C150", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x60017C0")]
		[Address(RVA = "0x4D8C1D0", Offset = "0x4D8C1D0", VA = "0x4D8C1D0")]
		public ValuesFloat()
		{
		}
	}

	[Token(Token = "0x20003B8")]
	private class ValuesInt : Values<int>
	{
		[Token(Token = "0x1700066B")]
		public override Func<int, int, bool> SameFunc
		{
			[Token(Token = "0x60017C1")]
			[Address(RVA = "0x4D8C270", Offset = "0x4D8C270", VA = "0x4D8C270", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60017C2")]
		[Address(RVA = "0x4D8C280", Offset = "0x4D8C280", VA = "0x4D8C280")]
		private static bool IsSame(int a, int b)
		{
			return default(bool);
		}

		[Token(Token = "0x60017C3")]
		[Address(RVA = "0x4D8C290", Offset = "0x4D8C290", VA = "0x4D8C290")]
		private static int Lerp(int a, int b, float t)
		{
			return default(int);
		}

		[Token(Token = "0x60017C4")]
		[Address(RVA = "0x4D8C3C0", Offset = "0x4D8C3C0", VA = "0x4D8C3C0", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x60017C5")]
		[Address(RVA = "0x4D8C460", Offset = "0x4D8C460", VA = "0x4D8C460", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x60017C6")]
		[Address(RVA = "0x4D8C510", Offset = "0x4D8C510", VA = "0x4D8C510", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x60017C7")]
		[Address(RVA = "0x4D8C590", Offset = "0x4D8C590", VA = "0x4D8C590")]
		public ValuesInt()
		{
		}
	}

	[Token(Token = "0x20003B9")]
	private class ValuesLength : Values<Length>
	{
		[Token(Token = "0x1700066C")]
		public override Func<Length, Length, bool> SameFunc
		{
			[Token(Token = "0x60017C8")]
			[Address(RVA = "0x4D8C630", Offset = "0x4D8C630", VA = "0x4D8C630", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60017C9")]
		[Address(RVA = "0x4D8C640", Offset = "0x4D8C640", VA = "0x4D8C640")]
		private static bool IsSame(Length a, Length b)
		{
			return default(bool);
		}

		[Token(Token = "0x60017CA")]
		[Address(RVA = "0x4D8C6F0", Offset = "0x4D8C6F0", VA = "0x4D8C6F0", Slot = "14")]
		protected sealed override bool ConvertUnits(VisualElement owner, StylePropertyId prop, ref Length a, ref Length b)
		{
			return default(bool);
		}

		[Token(Token = "0x60017CB")]
		[Address(RVA = "0x4D8C720", Offset = "0x4D8C720", VA = "0x4D8C720")]
		internal static Length Lerp(Length a, Length b, float t)
		{
			return default(Length);
		}

		[Token(Token = "0x60017CC")]
		[Address(RVA = "0x4D8C770", Offset = "0x4D8C770", VA = "0x4D8C770", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x60017CD")]
		[Address(RVA = "0x4D8C830", Offset = "0x4D8C830", VA = "0x4D8C830", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x60017CE")]
		[Address(RVA = "0x4D8C8E0", Offset = "0x4D8C8E0", VA = "0x4D8C8E0", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x60017CF")]
		[Address(RVA = "0x4D8C960", Offset = "0x4D8C960", VA = "0x4D8C960")]
		public ValuesLength()
		{
		}
	}

	[Token(Token = "0x20003BA")]
	private class ValuesColor : Values<Color>
	{
		[Token(Token = "0x1700066D")]
		public override Func<Color, Color, bool> SameFunc
		{
			[Token(Token = "0x60017D0")]
			[Address(RVA = "0x4D8CA00", Offset = "0x4D8CA00", VA = "0x4D8CA00", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60017D1")]
		[Address(RVA = "0x4D8CA10", Offset = "0x4D8CA10", VA = "0x4D8CA10")]
		private static bool IsSame(Color c, Color d)
		{
			return default(bool);
		}

		[Token(Token = "0x60017D2")]
		[Address(RVA = "0x4D8CB50", Offset = "0x4D8CB50", VA = "0x4D8CB50")]
		private static Color Lerp(Color a, Color b, float t)
		{
			return default(Color);
		}

		[Token(Token = "0x60017D3")]
		[Address(RVA = "0x4D8CB70", Offset = "0x4D8CB70", VA = "0x4D8CB70", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x60017D4")]
		[Address(RVA = "0x4D8CC10", Offset = "0x4D8CC10", VA = "0x4D8CC10", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x60017D5")]
		[Address(RVA = "0x4D8CCC0", Offset = "0x4D8CCC0", VA = "0x4D8CCC0", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x60017D6")]
		[Address(RVA = "0x4D8CD50", Offset = "0x4D8CD50", VA = "0x4D8CD50")]
		public ValuesColor()
		{
		}
	}

	[Token(Token = "0x20003BB")]
	private abstract class ValuesDiscrete<T> : Values<T>
	{
		[Token(Token = "0x1700066E")]
		public override Func<T, T, bool> SameFunc
		{
			[Token(Token = "0x60017D7")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60017D8")]
		private static bool IsSame(T a, T b)
		{
			return default(bool);
		}

		[Token(Token = "0x60017D9")]
		private static T Lerp(T a, T b, float t)
		{
			return (T)null;
		}

		[Token(Token = "0x60017DA")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x60017DB")]
		protected ValuesDiscrete()
		{
		}
	}

	[Token(Token = "0x20003BC")]
	private class ValuesBackground : ValuesDiscrete<Background>
	{
		[Token(Token = "0x60017DC")]
		[Address(RVA = "0x4D8CDF0", Offset = "0x4D8CDF0", VA = "0x4D8CDF0", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x60017DD")]
		[Address(RVA = "0x4D8CED0", Offset = "0x4D8CED0", VA = "0x4D8CED0", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x60017DE")]
		[Address(RVA = "0x4D8CF90", Offset = "0x4D8CF90", VA = "0x4D8CF90")]
		public ValuesBackground()
		{
		}
	}

	[Token(Token = "0x20003BD")]
	private class ValuesFontDefinition : ValuesDiscrete<FontDefinition>
	{
		[Token(Token = "0x60017DF")]
		[Address(RVA = "0x4D8CFD0", Offset = "0x4D8CFD0", VA = "0x4D8CFD0", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x60017E0")]
		[Address(RVA = "0x4D8D080", Offset = "0x4D8D080", VA = "0x4D8D080", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x60017E1")]
		[Address(RVA = "0x4D8D110", Offset = "0x4D8D110", VA = "0x4D8D110")]
		public ValuesFontDefinition()
		{
		}
	}

	[Token(Token = "0x20003BE")]
	private class ValuesFont : ValuesDiscrete<Font>
	{
		[Token(Token = "0x60017E2")]
		[Address(RVA = "0x4D8D150", Offset = "0x4D8D150", VA = "0x4D8D150", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x60017E3")]
		[Address(RVA = "0x4D8D200", Offset = "0x4D8D200", VA = "0x4D8D200", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x60017E4")]
		[Address(RVA = "0x4D8D280", Offset = "0x4D8D280", VA = "0x4D8D280")]
		public ValuesFont()
		{
		}
	}

	[Token(Token = "0x20003BF")]
	private class ValuesTextShadow : Values<TextShadow>
	{
		[Token(Token = "0x1700066F")]
		public override Func<TextShadow, TextShadow, bool> SameFunc
		{
			[Token(Token = "0x60017E5")]
			[Address(RVA = "0x4D8D2C0", Offset = "0x4D8D2C0", VA = "0x4D8D2C0", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60017E6")]
		[Address(RVA = "0x4D8D2D0", Offset = "0x4D8D2D0", VA = "0x4D8D2D0")]
		private static bool IsSame(TextShadow a, TextShadow b)
		{
			return default(bool);
		}

		[Token(Token = "0x60017E7")]
		[Address(RVA = "0x4D8D2E0", Offset = "0x4D8D2E0", VA = "0x4D8D2E0")]
		private static TextShadow Lerp(TextShadow a, TextShadow b, float t)
		{
			return default(TextShadow);
		}

		[Token(Token = "0x60017E8")]
		[Address(RVA = "0x4D8D340", Offset = "0x4D8D340", VA = "0x4D8D340", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x60017E9")]
		[Address(RVA = "0x4D8D480", Offset = "0x4D8D480", VA = "0x4D8D480", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x60017EA")]
		[Address(RVA = "0x4D8D570", Offset = "0x4D8D570", VA = "0x4D8D570", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x60017EB")]
		[Address(RVA = "0x4D8D640", Offset = "0x4D8D640", VA = "0x4D8D640")]
		public ValuesTextShadow()
		{
		}
	}

	[Token(Token = "0x20003C0")]
	private class ValuesScale : Values<Scale>
	{
		[Token(Token = "0x17000670")]
		public override Func<Scale, Scale, bool> SameFunc
		{
			[Token(Token = "0x60017EC")]
			[Address(RVA = "0x4D8D6E0", Offset = "0x4D8D6E0", VA = "0x4D8D6E0", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60017ED")]
		[Address(RVA = "0x4D8D6F0", Offset = "0x4D8D6F0", VA = "0x4D8D6F0")]
		private static bool IsSame(Scale a, Scale b)
		{
			return default(bool);
		}

		[Token(Token = "0x60017EE")]
		[Address(RVA = "0x4D8D740", Offset = "0x4D8D740", VA = "0x4D8D740", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x60017EF")]
		[Address(RVA = "0x4D8D7F0", Offset = "0x4D8D7F0", VA = "0x4D8D7F0", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x60017F0")]
		[Address(RVA = "0x4D8D880", Offset = "0x4D8D880", VA = "0x4D8D880")]
		private static Scale Lerp(Scale a, Scale b, float t)
		{
			return default(Scale);
		}

		[Token(Token = "0x60017F1")]
		[Address(RVA = "0x4D8D8D0", Offset = "0x4D8D8D0", VA = "0x4D8D8D0", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x60017F2")]
		[Address(RVA = "0x4D8D9C0", Offset = "0x4D8D9C0", VA = "0x4D8D9C0")]
		public ValuesScale()
		{
		}
	}

	[Token(Token = "0x20003C1")]
	private class ValuesRotate : Values<Rotate>
	{
		[Token(Token = "0x17000671")]
		public override Func<Rotate, Rotate, bool> SameFunc
		{
			[Token(Token = "0x60017F3")]
			[Address(RVA = "0x4D8DA60", Offset = "0x4D8DA60", VA = "0x4D8DA60", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60017F4")]
		[Address(RVA = "0x4D8DA70", Offset = "0x4D8DA70", VA = "0x4D8DA70")]
		private static bool IsSame(Rotate a, Rotate b)
		{
			return default(bool);
		}

		[Token(Token = "0x60017F5")]
		[Address(RVA = "0x4D8DB40", Offset = "0x4D8DB40", VA = "0x4D8DB40", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x60017F6")]
		[Address(RVA = "0x4D8DC20", Offset = "0x4D8DC20", VA = "0x4D8DC20", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x60017F7")]
		[Address(RVA = "0x4D8DCE0", Offset = "0x4D8DCE0", VA = "0x4D8DCE0")]
		private static Rotate Lerp(Rotate a, Rotate b, float t)
		{
			return default(Rotate);
		}

		[Token(Token = "0x60017F8")]
		[Address(RVA = "0x4D8DDA0", Offset = "0x4D8DDA0", VA = "0x4D8DDA0", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x60017F9")]
		[Address(RVA = "0x4D8DF40", Offset = "0x4D8DF40", VA = "0x4D8DF40")]
		public ValuesRotate()
		{
		}
	}

	[Token(Token = "0x20003C2")]
	private class ValuesTranslate : Values<Translate>
	{
		[Token(Token = "0x17000672")]
		public override Func<Translate, Translate, bool> SameFunc
		{
			[Token(Token = "0x60017FA")]
			[Address(RVA = "0x4D8DFE0", Offset = "0x4D8DFE0", VA = "0x4D8DFE0", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60017FB")]
		[Address(RVA = "0x4D8DFF0", Offset = "0x4D8DFF0", VA = "0x4D8DFF0")]
		private static bool IsSame(Translate a, Translate b)
		{
			return default(bool);
		}

		[Token(Token = "0x60017FC")]
		[Address(RVA = "0x4D8E060", Offset = "0x4D8E060", VA = "0x4D8E060", Slot = "14")]
		protected sealed override bool ConvertUnits(VisualElement owner, StylePropertyId prop, ref Translate a, ref Translate b)
		{
			return default(bool);
		}

		[Token(Token = "0x60017FD")]
		[Address(RVA = "0x4D8E080", Offset = "0x4D8E080", VA = "0x4D8E080", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x60017FE")]
		[Address(RVA = "0x4D8E160", Offset = "0x4D8E160", VA = "0x4D8E160", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x60017FF")]
		[Address(RVA = "0x4D8E220", Offset = "0x4D8E220", VA = "0x4D8E220")]
		private static Translate Lerp(Translate a, Translate b, float t)
		{
			return default(Translate);
		}

		[Token(Token = "0x6001800")]
		[Address(RVA = "0x4D8E2C0", Offset = "0x4D8E2C0", VA = "0x4D8E2C0", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x6001801")]
		[Address(RVA = "0x4D8E400", Offset = "0x4D8E400", VA = "0x4D8E400")]
		public ValuesTranslate()
		{
		}
	}

	[Token(Token = "0x20003C3")]
	private class ValuesTransformOrigin : Values<TransformOrigin>
	{
		[Token(Token = "0x17000673")]
		public override Func<TransformOrigin, TransformOrigin, bool> SameFunc
		{
			[Token(Token = "0x6001802")]
			[Address(RVA = "0x4D8E4A0", Offset = "0x4D8E4A0", VA = "0x4D8E4A0", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001803")]
		[Address(RVA = "0x4D8E4B0", Offset = "0x4D8E4B0", VA = "0x4D8E4B0")]
		private static bool IsSame(TransformOrigin a, TransformOrigin b)
		{
			return default(bool);
		}

		[Token(Token = "0x6001804")]
		[Address(RVA = "0x4D8E520", Offset = "0x4D8E520", VA = "0x4D8E520", Slot = "14")]
		protected sealed override bool ConvertUnits(VisualElement owner, StylePropertyId prop, ref TransformOrigin a, ref TransformOrigin b)
		{
			return default(bool);
		}

		[Token(Token = "0x6001805")]
		[Address(RVA = "0x4D8E540", Offset = "0x4D8E540", VA = "0x4D8E540", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x6001806")]
		[Address(RVA = "0x4D8E620", Offset = "0x4D8E620", VA = "0x4D8E620", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x6001807")]
		[Address(RVA = "0x4D8E6E0", Offset = "0x4D8E6E0", VA = "0x4D8E6E0")]
		private static TransformOrigin Lerp(TransformOrigin a, TransformOrigin b, float t)
		{
			return default(TransformOrigin);
		}

		[Token(Token = "0x6001808")]
		[Address(RVA = "0x4D8E770", Offset = "0x4D8E770", VA = "0x4D8E770", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x6001809")]
		[Address(RVA = "0x4D8E880", Offset = "0x4D8E880", VA = "0x4D8E880")]
		public ValuesTransformOrigin()
		{
		}
	}

	[Token(Token = "0x20003C4")]
	private class ValuesBackgroundPosition : ValuesDiscrete<BackgroundPosition>
	{
		[Token(Token = "0x600180A")]
		[Address(RVA = "0x4D8E920", Offset = "0x4D8E920", VA = "0x4D8E920", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x600180B")]
		[Address(RVA = "0x4D8E9D0", Offset = "0x4D8E9D0", VA = "0x4D8E9D0", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x600180C")]
		[Address(RVA = "0x4D8EA60", Offset = "0x4D8EA60", VA = "0x4D8EA60")]
		public ValuesBackgroundPosition()
		{
		}
	}

	[Token(Token = "0x20003C5")]
	private class ValuesBackgroundRepeat : ValuesDiscrete<BackgroundRepeat>
	{
		[Token(Token = "0x600180D")]
		[Address(RVA = "0x4D8EAA0", Offset = "0x4D8EAA0", VA = "0x4D8EAA0", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x600180E")]
		[Address(RVA = "0x4D8EB50", Offset = "0x4D8EB50", VA = "0x4D8EB50", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x600180F")]
		[Address(RVA = "0x4D8EBD0", Offset = "0x4D8EBD0", VA = "0x4D8EBD0")]
		public ValuesBackgroundRepeat()
		{
		}
	}

	[Token(Token = "0x20003C6")]
	private class ValuesBackgroundSize : Values<BackgroundSize>
	{
		[Token(Token = "0x17000674")]
		public override Func<BackgroundSize, BackgroundSize, bool> SameFunc
		{
			[Token(Token = "0x6001810")]
			[Address(RVA = "0x4D8EC10", Offset = "0x4D8EC10", VA = "0x4D8EC10", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001811")]
		[Address(RVA = "0x4D8EC20", Offset = "0x4D8EC20", VA = "0x4D8EC20")]
		private static bool IsSame(BackgroundSize a, BackgroundSize b)
		{
			return default(bool);
		}

		[Token(Token = "0x6001812")]
		[Address(RVA = "0x4D8EC30", Offset = "0x4D8EC30", VA = "0x4D8EC30", Slot = "14")]
		protected sealed override bool ConvertUnits(VisualElement owner, StylePropertyId prop, ref BackgroundSize a, ref BackgroundSize b)
		{
			return default(bool);
		}

		[Token(Token = "0x6001813")]
		[Address(RVA = "0x4D8EC50", Offset = "0x4D8EC50", VA = "0x4D8EC50", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x6001814")]
		[Address(RVA = "0x4D8ED30", Offset = "0x4D8ED30", VA = "0x4D8ED30", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x6001815")]
		[Address(RVA = "0x4D8EDF0", Offset = "0x4D8EDF0", VA = "0x4D8EDF0")]
		private static BackgroundSize Lerp(BackgroundSize a, BackgroundSize b, float t)
		{
			return default(BackgroundSize);
		}

		[Token(Token = "0x6001816")]
		[Address(RVA = "0x4D8EF00", Offset = "0x4D8EF00", VA = "0x4D8EF00", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x6001817")]
		[Address(RVA = "0x4D8F100", Offset = "0x4D8F100", VA = "0x4D8F100")]
		public ValuesBackgroundSize()
		{
		}
	}

	[Token(Token = "0x4000B00")]
	[FieldOffset(Offset = "0x10")]
	private long m_CurrentTimeMs;

	[Token(Token = "0x4000B01")]
	[FieldOffset(Offset = "0x18")]
	private ValuesFloat m_Floats;

	[Token(Token = "0x4000B02")]
	[FieldOffset(Offset = "0x20")]
	private ValuesInt m_Ints;

	[Token(Token = "0x4000B03")]
	[FieldOffset(Offset = "0x28")]
	private ValuesLength m_Lengths;

	[Token(Token = "0x4000B04")]
	[FieldOffset(Offset = "0x30")]
	private ValuesColor m_Colors;

	[Token(Token = "0x4000B05")]
	[FieldOffset(Offset = "0x38")]
	private ValuesBackground m_Backgrounds;

	[Token(Token = "0x4000B06")]
	[FieldOffset(Offset = "0x40")]
	private ValuesFontDefinition m_FontDefinitions;

	[Token(Token = "0x4000B07")]
	[FieldOffset(Offset = "0x48")]
	private ValuesFont m_Fonts;

	[Token(Token = "0x4000B08")]
	[FieldOffset(Offset = "0x50")]
	private ValuesTextShadow m_TextShadows;

	[Token(Token = "0x4000B09")]
	[FieldOffset(Offset = "0x58")]
	private ValuesScale m_Scale;

	[Token(Token = "0x4000B0A")]
	[FieldOffset(Offset = "0x60")]
	private ValuesRotate m_Rotate;

	[Token(Token = "0x4000B0B")]
	[FieldOffset(Offset = "0x68")]
	private ValuesTranslate m_Translate;

	[Token(Token = "0x4000B0C")]
	[FieldOffset(Offset = "0x70")]
	private ValuesTransformOrigin m_TransformOrigin;

	[Token(Token = "0x4000B0D")]
	[FieldOffset(Offset = "0x78")]
	private ValuesBackgroundPosition m_BackgroundPosition;

	[Token(Token = "0x4000B0E")]
	[FieldOffset(Offset = "0x80")]
	private ValuesBackgroundRepeat m_BackgroundRepeat;

	[Token(Token = "0x4000B0F")]
	[FieldOffset(Offset = "0x88")]
	private ValuesBackgroundSize m_BackgroundSize;

	[Token(Token = "0x4000B10")]
	[FieldOffset(Offset = "0x90")]
	private readonly List<Values> m_AllValues;

	[Token(Token = "0x4000B11")]
	[FieldOffset(Offset = "0x98")]
	private readonly Dictionary<StylePropertyId, Values> m_PropertyToValues;

	[Token(Token = "0x6001762")]
	[Address(RVA = "0x4D8AAC0", Offset = "0x4D8AAC0", VA = "0x4D8AAC0")]
	public StylePropertyAnimationSystem()
	{
	}

	[Token(Token = "0x6001763")]
	private T GetOrCreate<T>(ref T values) where T : new()
	{
		return (T)null;
	}

	[Token(Token = "0x6001764")]
	private bool StartTransition<T>(VisualElement owner, StylePropertyId prop, T startValue, T endValue, int durationMs, int delayMs, Func<float, float> easingCurve, Values<T> values)
	{
		return default(bool);
	}

	[Token(Token = "0x6001765")]
	[Address(RVA = "0x4D8ABD0", Offset = "0x4D8ABD0", VA = "0x4D8ABD0", Slot = "4")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, float startValue, float endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001766")]
	[Address(RVA = "0x4D8AC80", Offset = "0x4D8AC80", VA = "0x4D8AC80", Slot = "5")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, int startValue, int endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001767")]
	[Address(RVA = "0x4D8AD20", Offset = "0x4D8AD20", VA = "0x4D8AD20", Slot = "6")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, Length startValue, Length endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001768")]
	[Address(RVA = "0x4D8ADC0", Offset = "0x4D8ADC0", VA = "0x4D8ADC0", Slot = "7")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, Color startValue, Color endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001769")]
	[Address(RVA = "0x4D8AE80", Offset = "0x4D8AE80", VA = "0x4D8AE80", Slot = "8")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, Background startValue, Background endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x600176A")]
	[Address(RVA = "0x4D8AF50", Offset = "0x4D8AF50", VA = "0x4D8AF50", Slot = "9")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, FontDefinition startValue, FontDefinition endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x600176B")]
	[Address(RVA = "0x4D8B010", Offset = "0x4D8B010", VA = "0x4D8B010", Slot = "10")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, Font startValue, Font endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x600176C")]
	[Address(RVA = "0x4D8B0B0", Offset = "0x4D8B0B0", VA = "0x4D8B0B0", Slot = "11")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, TextShadow startValue, TextShadow endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x600176D")]
	[Address(RVA = "0x4D8B180", Offset = "0x4D8B180", VA = "0x4D8B180", Slot = "12")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, Scale startValue, Scale endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x600176E")]
	[Address(RVA = "0x4D8B230", Offset = "0x4D8B230", VA = "0x4D8B230", Slot = "15")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, Rotate startValue, Rotate endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x600176F")]
	[Address(RVA = "0x4D8B300", Offset = "0x4D8B300", VA = "0x4D8B300", Slot = "14")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, Translate startValue, Translate endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001770")]
	[Address(RVA = "0x4D8B3D0", Offset = "0x4D8B3D0", VA = "0x4D8B3D0", Slot = "13")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, TransformOrigin startValue, TransformOrigin endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001771")]
	[Address(RVA = "0x4D8B4A0", Offset = "0x4D8B4A0", VA = "0x4D8B4A0", Slot = "16")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, BackgroundPosition startValue, BackgroundPosition endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001772")]
	[Address(RVA = "0x4D8B550", Offset = "0x4D8B550", VA = "0x4D8B550", Slot = "17")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, BackgroundRepeat startValue, BackgroundRepeat endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001773")]
	[Address(RVA = "0x4D8B5F0", Offset = "0x4D8B5F0", VA = "0x4D8B5F0", Slot = "18")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, BackgroundSize startValue, BackgroundSize endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001774")]
	[Address(RVA = "0x4D8B6C0", Offset = "0x4D8B6C0", VA = "0x4D8B6C0", Slot = "19")]
	public void CancelAllAnimations()
	{
	}

	[Token(Token = "0x6001775")]
	[Address(RVA = "0x4D8B820", Offset = "0x4D8B820", VA = "0x4D8B820", Slot = "20")]
	public void CancelAllAnimations(VisualElement owner)
	{
	}

	[Token(Token = "0x6001776")]
	[Address(RVA = "0x4D8BB00", Offset = "0x4D8BB00", VA = "0x4D8BB00", Slot = "21")]
	public void CancelAnimation(VisualElement owner, StylePropertyId id)
	{
	}

	[Token(Token = "0x6001777")]
	[Address(RVA = "0x4D8BB90", Offset = "0x4D8BB90", VA = "0x4D8BB90", Slot = "22")]
	public void UpdateAnimation(VisualElement owner, StylePropertyId id)
	{
	}

	[Token(Token = "0x6001778")]
	[Address(RVA = "0x4D8BC20", Offset = "0x4D8BC20", VA = "0x4D8BC20", Slot = "23")]
	public void GetAllAnimations(VisualElement owner, List<StylePropertyId> propertyIds)
	{
	}

	[Token(Token = "0x6001779")]
	private void UpdateTracking<T>(Values<T> values)
	{
	}

	[Token(Token = "0x600177A")]
	[Address(RVA = "0x4D8BD90", Offset = "0x4D8BD90", VA = "0x4D8BD90")]
	private long CurrentTimeMs()
	{
		return default(long);
	}

	[Token(Token = "0x600177B")]
	[Address(RVA = "0x4D8BDA0", Offset = "0x4D8BDA0", VA = "0x4D8BDA0", Slot = "24")]
	public void Update()
	{
	}
}
