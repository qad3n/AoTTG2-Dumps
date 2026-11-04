// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.AdaptivePerformance;

[Token(Token = "0x200001F")]
public abstract class AdaptivePerformanceScaler : ScriptableObject
{
	[Token(Token = "0x4000093")]
	[FieldOffset(Offset = "0x18")]
	private AdaptivePerformanceIndexer m_Indexer;

	[Token(Token = "0x4000097")]
	[FieldOffset(Offset = "0x2C")]
	private int m_OverrideLevel;

	[Token(Token = "0x4000098")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private AdaptivePerformanceScalerSettingsBase m_defaultSetting;

	[Token(Token = "0x4000099")]
	[FieldOffset(Offset = "0x38")]
	protected IAdaptivePerformanceSettings m_Settings;

	[Token(Token = "0x17000048")]
	public virtual string Name
	{
		[Token(Token = "0x60000EC")]
		[Address(RVA = "0x1F79970", Offset = "0x1F77F70", VA = "0x181F79970", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000ED")]
		[Address(RVA = "0x2E8F400", Offset = "0x2E8DA00", VA = "0x182E8F400", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x17000049")]
	public virtual bool Enabled
	{
		[Token(Token = "0x60000EE")]
		[Address(RVA = "0x2E8F240", Offset = "0x2E8D840", VA = "0x182E8F240", Slot = "6")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000EF")]
		[Address(RVA = "0x2E8F360", Offset = "0x2E8D960", VA = "0x182E8F360", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x1700004A")]
	public virtual float Scale
	{
		[Token(Token = "0x60000F0")]
		[Address(RVA = "0x2E8F300", Offset = "0x2E8D900", VA = "0x182E8F300", Slot = "8")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000F1")]
		[Address(RVA = "0x2E8F4D0", Offset = "0x2E8DAD0", VA = "0x182E8F4D0", Slot = "9")]
		set
		{
		}
	}

	[Token(Token = "0x1700004B")]
	public virtual ScalerVisualImpact VisualImpact
	{
		[Token(Token = "0x60000F2")]
		[Address(RVA = "0x2E8F340", Offset = "0x2E8D940", VA = "0x182E8F340", Slot = "10")]
		get
		{
			return default(ScalerVisualImpact);
		}
		[Token(Token = "0x60000F3")]
		[Address(RVA = "0x2E8F520", Offset = "0x2E8DB20", VA = "0x182E8F520", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x1700004C")]
	public virtual ScalerTarget Target
	{
		[Token(Token = "0x60000F4")]
		[Address(RVA = "0x2E8F320", Offset = "0x2E8D920", VA = "0x182E8F320", Slot = "12")]
		get
		{
			return default(ScalerTarget);
		}
		[Token(Token = "0x60000F5")]
		[Address(RVA = "0x2E8F500", Offset = "0x2E8DB00", VA = "0x182E8F500", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x1700004D")]
	public virtual int MaxLevel
	{
		[Token(Token = "0x60000F6")]
		[Address(RVA = "0x2E8F2B0", Offset = "0x2E8D8B0", VA = "0x182E8F2B0", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000F7")]
		[Address(RVA = "0x2E8F3B0", Offset = "0x2E8D9B0", VA = "0x182E8F3B0", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x1700004E")]
	public virtual float MinBound
	{
		[Token(Token = "0x60000F8")]
		[Address(RVA = "0x2E8F2D0", Offset = "0x2E8D8D0", VA = "0x182E8F2D0", Slot = "16")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000F9")]
		[Address(RVA = "0x2E8F3D0", Offset = "0x2E8D9D0", VA = "0x182E8F3D0", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x1700004F")]
	public virtual float MaxBound
	{
		[Token(Token = "0x60000FA")]
		[Address(RVA = "0x2E8F290", Offset = "0x2E8D890", VA = "0x182E8F290", Slot = "18")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000FB")]
		[Address(RVA = "0x2E8F380", Offset = "0x2E8D980", VA = "0x182E8F380", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x17000050")]
	public int CurrentLevel
	{
		[Token(Token = "0x60000FC")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000FD")]
		[Address(RVA = "0xE4C6E0", Offset = "0xE4ACE0", VA = "0x180E4C6E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000051")]
	public bool IsMaxLevel
	{
		[Token(Token = "0x60000FE")]
		[Address(RVA = "0x2E8F260", Offset = "0x2E8D860", VA = "0x182E8F260")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000052")]
	public bool NotLeveled
	{
		[Token(Token = "0x60000FF")]
		[Address(RVA = "0x2E8F2F0", Offset = "0x2E8D8F0", VA = "0x182E8F2F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000053")]
	public int GpuImpact
	{
		[Token(Token = "0x6000100")]
		[Address(RVA = "0xBDB280", Offset = "0xBD9880", VA = "0x180BDB280")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000101")]
		[Address(RVA = "0xD23EF0", Offset = "0xD224F0", VA = "0x180D23EF0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000054")]
	public int CpuImpact
	{
		[Token(Token = "0x6000102")]
		[Address(RVA = "0x585030", Offset = "0x583630", VA = "0x180585030")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000103")]
		[Address(RVA = "0x585090", Offset = "0x583690", VA = "0x180585090")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000055")]
	public AdaptivePerformanceScalerSettingsBase DefaultSetting
	{
		[Token(Token = "0x6000104")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000105")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		set
		{
		}
	}

	[Token(Token = "0x17000056")]
	public int OverrideLevel
	{
		[Token(Token = "0x6000106")]
		[Address(RVA = "0xB3E080", Offset = "0xB3C680", VA = "0x180B3E080")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000107")]
		[Address(RVA = "0x2E8F460", Offset = "0x2E8DA60", VA = "0x182E8F460")]
		set
		{
		}
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x2E8EAE0", Offset = "0x2E8D0E0", VA = "0x182E8EAE0")]
	public int CalculateCost()
	{
		return default(int);
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x2E8E9D0", Offset = "0x2E8CFD0", VA = "0x182E8E9D0", Slot = "20")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x2E8EE90", Offset = "0x2E8D490", VA = "0x182E8EE90")]
	internal void InitializeScaler()
	{
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x2E8ED70", Offset = "0x2E8D370", VA = "0x182E8ED70")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x2E8ED70", Offset = "0x2E8D370", VA = "0x182E8ED70")]
	internal void EnableScaler()
	{
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x2E8EFE0", Offset = "0x2E8D5E0", VA = "0x182E8EFE0")]
	internal void RemoveScaler()
	{
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x2E8EFD0", Offset = "0x2E8D5D0", VA = "0x182E8EFD0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x2E8EDB0", Offset = "0x2E8D3B0", VA = "0x182E8EDB0")]
	internal void IncreaseLevel()
	{
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x2E8ECB0", Offset = "0x2E8D2B0", VA = "0x182E8ECB0")]
	internal void DecreaseLevel()
	{
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x2E8E9B0", Offset = "0x2E8CFB0", VA = "0x182E8E9B0")]
	internal void Activate()
	{
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x26D86C0", Offset = "0x26D6CC0", VA = "0x1826D86C0")]
	internal void Deactivate()
	{
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
	public void ApplyDefaultSetting(AdaptivePerformanceScalerSettingsBase defaultSetting)
	{
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x2E8F130", Offset = "0x2E8D730", VA = "0x182E8F130")]
	protected bool ScaleChanged()
	{
		return default(bool);
	}

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "21")]
	protected virtual void OnLevelIncrease()
	{
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "22")]
	protected virtual void OnLevelDecrease()
	{
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "23")]
	protected virtual void OnLevel()
	{
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "24")]
	protected virtual void OnEnabled()
	{
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "25")]
	protected virtual void OnDisabled()
	{
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x2E81040", Offset = "0x2E7F640", VA = "0x182E81040")]
	protected AdaptivePerformanceScaler()
	{
	}
}
