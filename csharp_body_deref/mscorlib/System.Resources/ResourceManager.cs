using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using System.Threading;
using Il2CppDummyDll;

namespace System.Resources;

[Serializable]
[Token(Token = "0x20004B9")]
[ComVisible(true)]
public class ResourceManager
{
	[Token(Token = "0x20004BA")]
	internal class CultureNameResourceSetPair
	{
		[Token(Token = "0x6002387")]
		[Address(RVA = "0x4EE55D0", Offset = "0x4EE55D0", VA = "0x4EE55D0")]
		public CultureNameResourceSetPair()
		{
		}
	}

	[Token(Token = "0x20004BB")]
	internal class ResourceManagerMediator
	{
		[Token(Token = "0x400138C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private ResourceManager _rm;

		[Token(Token = "0x1700048E")]
		internal string ModuleDir
		{
			[Token(Token = "0x6002389")]
			[Address(RVA = "0x4EE5660", Offset = "0x4EE5660", VA = "0x4EE5660")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700048F")]
		internal Type LocationInfo
		{
			[Token(Token = "0x600238A")]
			[Address(RVA = "0x4EE5680", Offset = "0x4EE5680", VA = "0x4EE5680")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000490")]
		internal Type UserResourceSet
		{
			[Token(Token = "0x600238B")]
			[Address(RVA = "0x4EE56A0", Offset = "0x4EE56A0", VA = "0x4EE56A0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000491")]
		internal string BaseNameField
		{
			[Token(Token = "0x600238C")]
			[Address(RVA = "0x4EE56C0", Offset = "0x4EE56C0", VA = "0x4EE56C0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000492")]
		internal CultureInfo NeutralResourcesCulture
		{
			[Token(Token = "0x600238D")]
			[Address(RVA = "0x4EE56E0", Offset = "0x4EE56E0", VA = "0x4EE56E0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000493")]
		internal bool LookedForSatelliteContractVersion
		{
			[Token(Token = "0x600238F")]
			[Address(RVA = "0x4EE5730", Offset = "0x4EE5730", VA = "0x4EE5730")]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x6002390")]
			[Address(RVA = "0x4EE5750", Offset = "0x4EE5750", VA = "0x4EE5750")]
			set
			{
			}
		}

		[Token(Token = "0x17000494")]
		internal Version SatelliteContractVersion
		{
			[Token(Token = "0x6002391")]
			[Address(RVA = "0x4EE5770", Offset = "0x4EE5770", VA = "0x4EE5770")]
			get
			{
				return null;
			}
			[Token(Token = "0x6002392")]
			[Address(RVA = "0x4EE5790", Offset = "0x4EE5790", VA = "0x4EE5790")]
			set
			{
			}
		}

		[Token(Token = "0x17000495")]
		internal UltimateResourceFallbackLocation FallbackLoc
		{
			[Token(Token = "0x6002394")]
			[Address(RVA = "0x4EE5820", Offset = "0x4EE5820", VA = "0x4EE5820")]
			get
			{
				return default(UltimateResourceFallbackLocation);
			}
		}

		[Token(Token = "0x17000496")]
		internal System.Reflection.RuntimeAssembly CallingAssembly
		{
			[Token(Token = "0x6002395")]
			[Address(RVA = "0x4EE5840", Offset = "0x4EE5840", VA = "0x4EE5840")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000497")]
		internal System.Reflection.RuntimeAssembly MainAssembly
		{
			[Token(Token = "0x6002396")]
			[Address(RVA = "0x4EE5860", Offset = "0x4EE5860", VA = "0x4EE5860")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000498")]
		internal string BaseName
		{
			[Token(Token = "0x6002397")]
			[Address(RVA = "0x4EE58D0", Offset = "0x4EE58D0", VA = "0x4EE58D0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002388")]
		[Address(RVA = "0x4EE55E0", Offset = "0x4EE55E0", VA = "0x4EE55E0")]
		internal ResourceManagerMediator(ResourceManager rm)
		{
		}

		[Token(Token = "0x600238E")]
		[Address(RVA = "0x4EE5700", Offset = "0x4EE5700", VA = "0x4EE5700")]
		internal string GetResourceFileName(CultureInfo culture)
		{
			return null;
		}

		[Token(Token = "0x6002393")]
		[Address(RVA = "0x4EE57B0", Offset = "0x4EE57B0", VA = "0x4EE57B0")]
		internal Version ObtainSatelliteContractVersion(Assembly a)
		{
			return null;
		}
	}

	[Token(Token = "0x4001373")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	protected string BaseNameField;

	[Token(Token = "0x4001374")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	[Obsolete("call InternalGetResourceSet instead")]
	protected Hashtable ResourceSets;

	[NonSerialized]
	[Token(Token = "0x4001375")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Dictionary<string, ResourceSet> _resourceSets;

	[Token(Token = "0x4001376")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string moduleDir;

	[Token(Token = "0x4001377")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	protected Assembly MainAssembly;

	[Token(Token = "0x4001378")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Type _locationInfo;

	[Token(Token = "0x4001379")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private Type _userResourceSet;

	[Token(Token = "0x400137A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private CultureInfo _neutralResourcesCulture;

	[NonSerialized]
	[Token(Token = "0x400137B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private CultureNameResourceSetPair _lastUsedResourceCache;

	[Token(Token = "0x400137C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private bool _ignoreCase;

	[Token(Token = "0x400137D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x59")]
	private bool UseManifest;

	[Token(Token = "0x400137E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5A")]
	[OptionalField(VersionAdded = 1)]
	private bool UseSatelliteAssem;

	[Token(Token = "0x400137F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	[OptionalField]
	private UltimateResourceFallbackLocation _fallbackLoc;

	[Token(Token = "0x4001380")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	[OptionalField]
	private Version _satelliteContractVersion;

	[Token(Token = "0x4001381")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	[OptionalField]
	private bool _lookedForSatelliteContractVersion;

	[Token(Token = "0x4001382")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	[OptionalField(VersionAdded = 1)]
	private Assembly _callingAssembly;

	[Token(Token = "0x4001383")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	[OptionalField(VersionAdded = 4)]
	private System.Reflection.RuntimeAssembly m_callingAssembly;

	[NonSerialized]
	[Token(Token = "0x4001384")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private System.Resources.IResourceGroveler resourceGroveler;

	[Token(Token = "0x4001385")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly int MagicNumber;

	[Token(Token = "0x4001386")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	public static readonly int HeaderVersionNumber;

	[Token(Token = "0x4001387")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly Type _minResourceSet;

	[Token(Token = "0x4001388")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal static readonly string ResReaderTypeName;

	[Token(Token = "0x4001389")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal static readonly string ResSetTypeName;

	[Token(Token = "0x400138A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal static readonly string MscorlibName;

	[Token(Token = "0x400138B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal static readonly int DEBUG;

	[Token(Token = "0x1700048B")]
	public virtual string BaseName
	{
		[Token(Token = "0x600237A")]
		[Address(RVA = "0x4EE39D0", Offset = "0x4EE39D0", VA = "0x4EE39D0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700048C")]
	public virtual bool IgnoreCase
	{
		[Token(Token = "0x600237B")]
		[Address(RVA = "0x4EE39E0", Offset = "0x4EE39E0", VA = "0x4EE39E0", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700048D")]
	protected UltimateResourceFallbackLocation FallbackLocation
	{
		[Token(Token = "0x600237C")]
		[Address(RVA = "0x4EE39F0", Offset = "0x4EE39F0", VA = "0x4EE39F0")]
		get
		{
			return default(UltimateResourceFallbackLocation);
		}
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002373")]
	[Address(RVA = "0x4EE3030", Offset = "0x4EE3030", VA = "0x4EE3030")]
	private void Init()
	{
	}

	[Token(Token = "0x6002374")]
	[Address(RVA = "0x4EE3140", Offset = "0x4EE3140", VA = "0x4EE3140")]
	protected ResourceManager()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002375")]
	[Address(RVA = "0x4EE3220", Offset = "0x4EE3220", VA = "0x4EE3220")]
	public ResourceManager(Type resourceSource)
	{
	}

	[Token(Token = "0x6002376")]
	[Address(RVA = "0x4EE3720", Offset = "0x4EE3720", VA = "0x4EE3720")]
	[OnDeserializing]
	private void OnDeserializing(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002377")]
	[Address(RVA = "0x4EE3770", Offset = "0x4EE3770", VA = "0x4EE3770")]
	[OnDeserialized]
	private void OnDeserialized(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002378")]
	[Address(RVA = "0x4EE3960", Offset = "0x4EE3960", VA = "0x4EE3960")]
	[OnSerializing]
	private void OnSerializing(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002379")]
	[Address(RVA = "0x4EE3590", Offset = "0x4EE3590", VA = "0x4EE3590")]
	private void CommonAssemblyInit()
	{
	}

	[Token(Token = "0x600237D")]
	[Address(RVA = "0x4EE3A00", Offset = "0x4EE3A00", VA = "0x4EE3A00", Slot = "6")]
	protected virtual string GetResourceFileName(CultureInfo culture)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x600237E")]
	[Address(RVA = "0x4EE3B30", Offset = "0x4EE3B30", VA = "0x4EE3B30", Slot = "7")]
	public virtual ResourceSet GetResourceSet(CultureInfo culture, bool createIfNotExists, bool tryParents)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x600237F")]
	[Address(RVA = "0x4EE4080", Offset = "0x4EE4080", VA = "0x4EE4080", Slot = "8")]
	protected virtual ResourceSet InternalGetResourceSet(CultureInfo culture, bool createIfNotExists, bool tryParents)
	{
		return null;
	}

	[Token(Token = "0x6002380")]
	[Address(RVA = "0x4EE40A0", Offset = "0x4EE40A0", VA = "0x4EE40A0")]
	private ResourceSet InternalGetResourceSet(CultureInfo requestedCulture, bool createIfNotExists, bool tryParents, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[Token(Token = "0x6002381")]
	[Address(RVA = "0x4EE3EC0", Offset = "0x4EE3EC0", VA = "0x4EE3EC0")]
	private static void AddResourceSet(Dictionary<string, ResourceSet> localResourceSets, string cultureName, ref ResourceSet rs)
	{
	}

	[Token(Token = "0x6002382")]
	[Address(RVA = "0x4EE4AA0", Offset = "0x4EE4AA0", VA = "0x4EE4AA0")]
	protected static Version GetSatelliteContractVersion(Assembly a)
	{
		return null;
	}

	[Token(Token = "0x6002383")]
	[Address(RVA = "0x4EE52F0", Offset = "0x4EE52F0", VA = "0x4EE52F0")]
	protected static CultureInfo GetNeutralResourcesLanguage(Assembly a)
	{
		return null;
	}

	[Token(Token = "0x6002384")]
	[Address(RVA = "0x4EE2E10", Offset = "0x4EE2E10", VA = "0x4EE2E10")]
	internal static bool CompareNames(string asmTypeName1, string typeName2, AssemblyName asmName2)
	{
		return default(bool);
	}

	[Token(Token = "0x6002385")]
	[Address(RVA = "0x4EE3580", Offset = "0x4EE3580", VA = "0x4EE3580")]
	private void SetAppXConfiguration()
	{
	}
}
