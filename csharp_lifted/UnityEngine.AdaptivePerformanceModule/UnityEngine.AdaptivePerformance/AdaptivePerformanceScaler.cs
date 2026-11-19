// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.AdaptivePerformance;

[Token(Token = "0x2000031")]
public abstract class AdaptivePerformanceScaler : ScriptableObject
{
	[Token(Token = "0x40000BE")]
	[FieldOffset(Offset = "0x18")]
	private AdaptivePerformanceIndexer m_Indexer;

	[Token(Token = "0x40000C2")]
	[FieldOffset(Offset = "0x2C")]
	private int m_OverrideLevel;

	[Token(Token = "0x40000C3")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private AdaptivePerformanceScalerSettingsBase m_defaultSetting;

	[Token(Token = "0x40000C4")]
	[FieldOffset(Offset = "0x38")]
	protected IAdaptivePerformanceSettings m_Settings;

	[Token(Token = "0x17000066")]
	public virtual string Name
	{
		[Token(Token = "0x6000130")]
		[Address(RVA = "0x688A0E0", Offset = "0x68890E0", VA = "0x688A0E0", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000131")]
		[Address(RVA = "0x688A110", Offset = "0x6889110", VA = "0x688A110", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x17000067")]
	public virtual bool Enabled
	{
		[Token(Token = "0x6000132")]
		[Address(RVA = "0x688A170", Offset = "0x6889170", VA = "0x688A170", Slot = "6")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000133")]
		[Address(RVA = "0x688A1A0", Offset = "0x68891A0", VA = "0x688A1A0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x17000068")]
	public virtual float Scale
	{
		[Token(Token = "0x6000134")]
		[Address(RVA = "0x688A1E0", Offset = "0x68891E0", VA = "0x688A1E0", Slot = "8")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000135")]
		[Address(RVA = "0x688A210", Offset = "0x6889210", VA = "0x688A210", Slot = "9")]
		set
		{
		}
	}

	[Token(Token = "0x17000069")]
	public virtual ScalerVisualImpact VisualImpact
	{
		[Token(Token = "0x6000136")]
		[Address(RVA = "0x688A250", Offset = "0x6889250", VA = "0x688A250", Slot = "10")]
		get
		{
			return default(ScalerVisualImpact);
		}
		[Token(Token = "0x6000137")]
		[Address(RVA = "0x688A280", Offset = "0x6889280", VA = "0x688A280", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x1700006A")]
	public virtual ScalerTarget Target
	{
		[Token(Token = "0x6000138")]
		[Address(RVA = "0x688A2B0", Offset = "0x68892B0", VA = "0x688A2B0", Slot = "12")]
		get
		{
			return default(ScalerTarget);
		}
		[Token(Token = "0x6000139")]
		[Address(RVA = "0x688A2E0", Offset = "0x68892E0", VA = "0x688A2E0", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x1700006B")]
	public virtual int MaxLevel
	{
		[Token(Token = "0x600013A")]
		[Address(RVA = "0x688A310", Offset = "0x6889310", VA = "0x688A310", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600013B")]
		[Address(RVA = "0x688A340", Offset = "0x6889340", VA = "0x688A340", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x1700006C")]
	public virtual float MinBound
	{
		[Token(Token = "0x600013C")]
		[Address(RVA = "0x688A370", Offset = "0x6889370", VA = "0x688A370", Slot = "16")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600013D")]
		[Address(RVA = "0x688A3A0", Offset = "0x68893A0", VA = "0x688A3A0", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x1700006D")]
	public virtual float MaxBound
	{
		[Token(Token = "0x600013E")]
		[Address(RVA = "0x688A3E0", Offset = "0x68893E0", VA = "0x688A3E0", Slot = "18")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600013F")]
		[Address(RVA = "0x688A410", Offset = "0x6889410", VA = "0x688A410", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x1700006E")]
	public int CurrentLevel
	{
		[Token(Token = "0x6000140")]
		[Address(RVA = "0x688A450", Offset = "0x6889450", VA = "0x688A450")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000141")]
		[Address(RVA = "0x688A460", Offset = "0x6889460", VA = "0x688A460")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700006F")]
	public bool IsMaxLevel
	{
		[Token(Token = "0x6000142")]
		[Address(RVA = "0x68896A0", Offset = "0x68886A0", VA = "0x68896A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000070")]
	public bool NotLeveled
	{
		[Token(Token = "0x6000143")]
		[Address(RVA = "0x6887F10", Offset = "0x6886F10", VA = "0x6887F10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000071")]
	public int GpuImpact
	{
		[Token(Token = "0x6000144")]
		[Address(RVA = "0x688A470", Offset = "0x6889470", VA = "0x688A470")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000145")]
		[Address(RVA = "0x688A480", Offset = "0x6889480", VA = "0x688A480")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000072")]
	public int CpuImpact
	{
		[Token(Token = "0x6000146")]
		[Address(RVA = "0x688A490", Offset = "0x6889490", VA = "0x688A490")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000147")]
		[Address(RVA = "0x688A4A0", Offset = "0x68894A0", VA = "0x688A4A0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000073")]
	public AdaptivePerformanceScalerSettingsBase DefaultSetting
	{
		[Token(Token = "0x6000148")]
		[Address(RVA = "0x688A4B0", Offset = "0x68894B0", VA = "0x688A4B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000149")]
		[Address(RVA = "0x688A4C0", Offset = "0x68894C0", VA = "0x688A4C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000074")]
	public int OverrideLevel
	{
		[Token(Token = "0x600014A")]
		[Address(RVA = "0x688A4D0", Offset = "0x68894D0", VA = "0x688A4D0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600014B")]
		[Address(RVA = "0x688A4E0", Offset = "0x68894E0", VA = "0x688A4E0")]
		set
		{
		}
	}

	[Token(Token = "0x600014C")]
	[Address(RVA = "0x68894B0", Offset = "0x68884B0", VA = "0x68894B0")]
	public int CalculateCost()
	{
		return default(int);
	}

	[Token(Token = "0x600014D")]
	[Address(RVA = "0x688A540", Offset = "0x6889540", VA = "0x688A540", Slot = "20")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x600014E")]
	[Address(RVA = "0x68843C0", Offset = "0x68833C0", VA = "0x68843C0")]
	internal void InitializeScaler()
	{
	}

	[Token(Token = "0x600014F")]
	[Address(RVA = "0x688A720", Offset = "0x6889720", VA = "0x688A720")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000150")]
	[Address(RVA = "0x688A6F0", Offset = "0x68896F0", VA = "0x688A6F0")]
	internal void EnableScaler()
	{
	}

	[Token(Token = "0x6000151")]
	[Address(RVA = "0x688A750", Offset = "0x6889750", VA = "0x688A750")]
	internal void RemoveScaler()
	{
	}

	[Token(Token = "0x6000152")]
	[Address(RVA = "0x688A790", Offset = "0x6889790", VA = "0x688A790")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000153")]
	[Address(RVA = "0x68896C0", Offset = "0x68886C0", VA = "0x68896C0")]
	internal void IncreaseLevel()
	{
	}

	[Token(Token = "0x6000154")]
	[Address(RVA = "0x6887E60", Offset = "0x6886E60", VA = "0x6887E60")]
	internal void DecreaseLevel()
	{
	}

	[Token(Token = "0x6000155")]
	[Address(RVA = "0x6889490", Offset = "0x6888490", VA = "0x6889490")]
	internal void Activate()
	{
	}

	[Token(Token = "0x6000156")]
	[Address(RVA = "0x6889470", Offset = "0x6888470", VA = "0x6889470")]
	internal void Deactivate()
	{
	}

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x688A7D0", Offset = "0x68897D0", VA = "0x688A7D0")]
	public void ApplyDefaultSetting(AdaptivePerformanceScalerSettingsBase defaultSetting)
	{
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x688A7E0", Offset = "0x68897E0", VA = "0x688A7E0")]
	protected bool ScaleChanged()
	{
		return default(bool);
	}

	[Token(Token = "0x6000159")]
	[Address(RVA = "0x688A8E0", Offset = "0x68898E0", VA = "0x688A8E0", Slot = "21")]
	protected virtual void OnLevelIncrease()
	{
	}

	[Token(Token = "0x600015A")]
	[Address(RVA = "0x688A8F0", Offset = "0x68898F0", VA = "0x688A8F0", Slot = "22")]
	protected virtual void OnLevelDecrease()
	{
	}

	[Token(Token = "0x600015B")]
	[Address(RVA = "0x688A900", Offset = "0x6889900", VA = "0x688A900", Slot = "23")]
	protected virtual void OnLevel()
	{
	}

	[Token(Token = "0x600015C")]
	[Address(RVA = "0x688A910", Offset = "0x6889910", VA = "0x688A910", Slot = "24")]
	protected virtual void OnEnabled()
	{
	}

	[Token(Token = "0x600015D")]
	[Address(RVA = "0x688A920", Offset = "0x6889920", VA = "0x688A920", Slot = "25")]
	protected virtual void OnDisabled()
	{
	}

	[Token(Token = "0x600015E")]
	[Address(RVA = "0x688A930", Offset = "0x6889930", VA = "0x688A930")]
	protected AdaptivePerformanceScaler()
	{
	}
}
