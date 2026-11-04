// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Experimental.ValueAnimation
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.Experimental;

[Token(Token = "0x200065C")]
public sealed class ValueAnimation<T> : IValueAnimationUpdate
{
	[Token(Token = "0x400183A")]
	[FieldOffset(Offset = "0x0")]
	private long m_StartTimeMs;

	[Token(Token = "0x400183B")]
	[FieldOffset(Offset = "0x0")]
	private int m_DurationMs;

	[Token(Token = "0x4001841")]
	[FieldOffset(Offset = "0x0")]
	private static ObjectPool<ValueAnimation<T>> sObjectPool;

	[Token(Token = "0x4001846")]
	[FieldOffset(Offset = "0x0")]
	private T _from;

	[Token(Token = "0x4001847")]
	[FieldOffset(Offset = "0x0")]
	private bool fromValueSet;

	[Token(Token = "0x17000BA0")]
	public int durationMs
	{
		[Token(Token = "0x6002E76")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002E77")]
		set
		{
		}
	}

	[Token(Token = "0x17000BA1")]
	public Func<float, float> easingCurve
	{
		[Token(Token = "0x6002E78")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002E79")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000BA2")]
	public bool isRunning
	{
		[Token(Token = "0x6002E7A")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002E7B")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000BA3")]
	public Action onAnimationCompleted
	{
		[Token(Token = "0x6002E7C")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002E7D")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000BA4")]
	public bool autoRecycle
	{
		[Token(Token = "0x6002E7E")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002E7F")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000BA5")]
	private bool recycled
	{
		[Token(Token = "0x6002E80")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002E81")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000BA6")]
	private VisualElement owner
	{
		[Token(Token = "0x6002E82")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002E83")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000BA7")]
	public Action<VisualElement, T> valueUpdated
	{
		[Token(Token = "0x6002E84")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002E85")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000BA8")]
	public Func<VisualElement, T> initialValue
	{
		[Token(Token = "0x6002E86")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002E87")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000BA9")]
	public Func<T, T, float, T> interpolator
	{
		[Token(Token = "0x6002E88")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002E89")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000BAA")]
	public T from
	{
		[Token(Token = "0x6002E8A")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x6002E8B")]
		set
		{
		}
	}

	[Token(Token = "0x17000BAB")]
	public T to
	{
		[Token(Token = "0x6002E8C")]
		[CompilerGenerated]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x6002E8D")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6002E8E")]
	public ValueAnimation()
	{
	}

	[Token(Token = "0x6002E8F")]
	public void Start()
	{
	}

	[Token(Token = "0x6002E90")]
	public void Stop()
	{
	}

	[Token(Token = "0x6002E91")]
	public void Recycle()
	{
	}

	[Token(Token = "0x6002E92")]
	private void UnityEngine_002EUIElements_002EExperimental_002EIValueAnimationUpdate_002ETick(long currentTimeMs)
	{
	}

	[Token(Token = "0x6002E93")]
	private void SetDefaultValues()
	{
	}

	[Token(Token = "0x6002E94")]
	private void Unregister()
	{
	}

	[Token(Token = "0x6002E95")]
	private void Register()
	{
	}

	[Token(Token = "0x6002E96")]
	internal void SetOwner(VisualElement e)
	{
	}

	[Token(Token = "0x6002E97")]
	private void CheckNotRecycled()
	{
	}

	[Token(Token = "0x6002E98")]
	public static ValueAnimation<T> Create(VisualElement e, Func<T, T, float, T> interpolator)
	{
		return null;
	}

	[Token(Token = "0x6002E99")]
	public ValueAnimation<T> KeepAlive()
	{
		return null;
	}
}
