// ==================== AoTTG2 cross-reference ====================
// Type: System.Resources.ResourceManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/ResourceManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
[Token(Token = "0x20004C2")]
[ComVisible(true)]
public class ResourceManager
{
	[Token(Token = "0x20004C3")]
	internal class CultureNameResourceSetPair
	{
		[Token(Token = "0x60023D7")]
		[Address(RVA = "0x53D26E0", Offset = "0x53D16E0", VA = "0x53D26E0")]
		public CultureNameResourceSetPair()
		{
		}
	}

	[Token(Token = "0x20004C4")]
	internal class ResourceManagerMediator
	{
		[Token(Token = "0x40012EC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private ResourceManager _rm;

		[Token(Token = "0x17000490")]
		internal string ModuleDir
		{
			[Token(Token = "0x60023D9")]
			[Address(RVA = "0x53D2770", Offset = "0x53D1770", VA = "0x53D2770")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000491")]
		internal Type LocationInfo
		{
			[Token(Token = "0x60023DA")]
			[Address(RVA = "0x53D2790", Offset = "0x53D1790", VA = "0x53D2790")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000492")]
		internal Type UserResourceSet
		{
			[Token(Token = "0x60023DB")]
			[Address(RVA = "0x53D27B0", Offset = "0x53D17B0", VA = "0x53D27B0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000493")]
		internal string BaseNameField
		{
			[Token(Token = "0x60023DC")]
			[Address(RVA = "0x53D27D0", Offset = "0x53D17D0", VA = "0x53D27D0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000494")]
		internal CultureInfo NeutralResourcesCulture
		{
			[Token(Token = "0x60023DD")]
			[Address(RVA = "0x53D27F0", Offset = "0x53D17F0", VA = "0x53D27F0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000495")]
		internal bool LookedForSatelliteContractVersion
		{
			[Token(Token = "0x60023DF")]
			[Address(RVA = "0x53D2840", Offset = "0x53D1840", VA = "0x53D2840")]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x60023E0")]
			[Address(RVA = "0x53D2860", Offset = "0x53D1860", VA = "0x53D2860")]
			set
			{
			}
		}

		[Token(Token = "0x17000496")]
		internal Version SatelliteContractVersion
		{
			[Token(Token = "0x60023E1")]
			[Address(RVA = "0x53D2880", Offset = "0x53D1880", VA = "0x53D2880")]
			get
			{
				return null;
			}
			[Token(Token = "0x60023E2")]
			[Address(RVA = "0x53D28A0", Offset = "0x53D18A0", VA = "0x53D28A0")]
			set
			{
			}
		}

		[Token(Token = "0x17000497")]
		internal UltimateResourceFallbackLocation FallbackLoc
		{
			[Token(Token = "0x60023E4")]
			[Address(RVA = "0x53D2930", Offset = "0x53D1930", VA = "0x53D2930")]
			get
			{
				return default(UltimateResourceFallbackLocation);
			}
		}

		[Token(Token = "0x17000498")]
		internal System.Reflection.RuntimeAssembly CallingAssembly
		{
			[Token(Token = "0x60023E5")]
			[Address(RVA = "0x53D2950", Offset = "0x53D1950", VA = "0x53D2950")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000499")]
		internal System.Reflection.RuntimeAssembly MainAssembly
		{
			[Token(Token = "0x60023E6")]
			[Address(RVA = "0x53D2970", Offset = "0x53D1970", VA = "0x53D2970")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700049A")]
		internal string BaseName
		{
			[Token(Token = "0x60023E7")]
			[Address(RVA = "0x53D29E0", Offset = "0x53D19E0", VA = "0x53D29E0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60023D8")]
		[Address(RVA = "0x53D26F0", Offset = "0x53D16F0", VA = "0x53D26F0")]
		internal ResourceManagerMediator(ResourceManager rm)
		{
		}

		[Token(Token = "0x60023DE")]
		[Address(RVA = "0x53D2810", Offset = "0x53D1810", VA = "0x53D2810")]
		internal string GetResourceFileName(CultureInfo culture)
		{
			return null;
		}

		[Token(Token = "0x60023E3")]
		[Address(RVA = "0x53D28C0", Offset = "0x53D18C0", VA = "0x53D28C0")]
		internal Version ObtainSatelliteContractVersion(Assembly a)
		{
			return null;
		}
	}

	[Token(Token = "0x40012D3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	protected string BaseNameField;

	[Token(Token = "0x40012D4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	[Obsolete("call InternalGetResourceSet instead")]
	protected Hashtable ResourceSets;

	[NonSerialized]
	[Token(Token = "0x40012D5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Dictionary<string, ResourceSet> _resourceSets;

	[Token(Token = "0x40012D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string moduleDir;

	[Token(Token = "0x40012D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	protected Assembly MainAssembly;

	[Token(Token = "0x40012D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Type _locationInfo;

	[Token(Token = "0x40012D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private Type _userResourceSet;

	[Token(Token = "0x40012DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private CultureInfo _neutralResourcesCulture;

	[NonSerialized]
	[Token(Token = "0x40012DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private CultureNameResourceSetPair _lastUsedResourceCache;

	[Token(Token = "0x40012DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private bool _ignoreCase;

	[Token(Token = "0x40012DD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x59")]
	private bool UseManifest;

	[Token(Token = "0x40012DE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5A")]
	[OptionalField(VersionAdded = 1)]
	private bool UseSatelliteAssem;

	[Token(Token = "0x40012DF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	[OptionalField]
	private UltimateResourceFallbackLocation _fallbackLoc;

	[Token(Token = "0x40012E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	[OptionalField]
	private Version _satelliteContractVersion;

	[Token(Token = "0x40012E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	[OptionalField]
	private bool _lookedForSatelliteContractVersion;

	[Token(Token = "0x40012E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	[OptionalField(VersionAdded = 1)]
	private Assembly _callingAssembly;

	[Token(Token = "0x40012E3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	[OptionalField(VersionAdded = 4)]
	private System.Reflection.RuntimeAssembly m_callingAssembly;

	[NonSerialized]
	[Token(Token = "0x40012E4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private System.Resources.IResourceGroveler resourceGroveler;

	[Token(Token = "0x40012E5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly int MagicNumber;

	[Token(Token = "0x40012E6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	public static readonly int HeaderVersionNumber;

	[Token(Token = "0x40012E7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly Type _minResourceSet;

	[Token(Token = "0x40012E8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal static readonly string ResReaderTypeName;

	[Token(Token = "0x40012E9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal static readonly string ResSetTypeName;

	[Token(Token = "0x40012EA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal static readonly string MscorlibName;

	[Token(Token = "0x40012EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal static readonly int DEBUG;

	[Token(Token = "0x1700048D")]
	public virtual string BaseName
	{
		[Token(Token = "0x60023CA")]
		[Address(RVA = "0x53D0B70", Offset = "0x53CFB70", VA = "0x53D0B70", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700048E")]
	public virtual bool IgnoreCase
	{
		[Token(Token = "0x60023CB")]
		[Address(RVA = "0x53D0B80", Offset = "0x53CFB80", VA = "0x53D0B80", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700048F")]
	protected UltimateResourceFallbackLocation FallbackLocation
	{
		[Token(Token = "0x60023CC")]
		[Address(RVA = "0x53D0B90", Offset = "0x53CFB90", VA = "0x53D0B90")]
		get
		{
			return default(UltimateResourceFallbackLocation);
		}
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60023C3")]
	[Address(RVA = "0x53D0200", Offset = "0x53CF200", VA = "0x53D0200")]
	private void Init()
	{
	}

	[Token(Token = "0x60023C4")]
	[Address(RVA = "0x53D0300", Offset = "0x53CF300", VA = "0x53D0300")]
	protected ResourceManager()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60023C5")]
	[Address(RVA = "0x53D03E0", Offset = "0x53CF3E0", VA = "0x53D03E0")]
	public ResourceManager(Type resourceSource)
	{
	}

	[Token(Token = "0x60023C6")]
	[Address(RVA = "0x53D08A0", Offset = "0x53CF8A0", VA = "0x53D08A0")]
	[OnDeserializing]
	private void OnDeserializing(StreamingContext ctx)
	{
	}

	[Token(Token = "0x60023C7")]
	[Address(RVA = "0x53D08F0", Offset = "0x53CF8F0", VA = "0x53D08F0")]
	[OnDeserialized]
	private void OnDeserialized(StreamingContext ctx)
	{
	}

	[Token(Token = "0x60023C8")]
	[Address(RVA = "0x53D0AF0", Offset = "0x53CFAF0", VA = "0x53D0AF0")]
	[OnSerializing]
	private void OnSerializing(StreamingContext ctx)
	{
	}

	[Token(Token = "0x60023C9")]
	[Address(RVA = "0x53D0710", Offset = "0x53CF710", VA = "0x53D0710")]
	private void CommonAssemblyInit()
	{
	}

	[Token(Token = "0x60023CD")]
	[Address(RVA = "0x53D0BA0", Offset = "0x53CFBA0", VA = "0x53D0BA0", Slot = "6")]
	protected virtual string GetResourceFileName(CultureInfo culture)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60023CE")]
	[Address(RVA = "0x53D0CD0", Offset = "0x53CFCD0", VA = "0x53D0CD0", Slot = "7")]
	public virtual ResourceSet GetResourceSet(CultureInfo culture, bool createIfNotExists, bool tryParents)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60023CF")]
	[Address(RVA = "0x53D11E0", Offset = "0x53D01E0", VA = "0x53D11E0", Slot = "8")]
	protected virtual ResourceSet InternalGetResourceSet(CultureInfo culture, bool createIfNotExists, bool tryParents)
	{
		return null;
	}

	[Token(Token = "0x60023D0")]
	[Address(RVA = "0x53D1200", Offset = "0x53D0200", VA = "0x53D1200")]
	private ResourceSet InternalGetResourceSet(CultureInfo requestedCulture, bool createIfNotExists, bool tryParents, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[Token(Token = "0x60023D1")]
	[Address(RVA = "0x53D1060", Offset = "0x53D0060", VA = "0x53D1060")]
	private static void AddResourceSet(Dictionary<string, ResourceSet> localResourceSets, string cultureName, ref ResourceSet rs)
	{
	}

	[Token(Token = "0x60023D2")]
	[Address(RVA = "0x53D1B10", Offset = "0x53D0B10", VA = "0x53D1B10")]
	protected static Version GetSatelliteContractVersion(Assembly a)
	{
		return null;
	}

	[Token(Token = "0x60023D3")]
	[Address(RVA = "0x53D22A0", Offset = "0x53D12A0", VA = "0x53D22A0")]
	protected static CultureInfo GetNeutralResourcesLanguage(Assembly a)
	{
		return null;
	}

	[Token(Token = "0x60023D4")]
	[Address(RVA = "0x53CFFD0", Offset = "0x53CEFD0", VA = "0x53CFFD0")]
	internal static bool CompareNames(string asmTypeName1, string typeName2, AssemblyName asmName2)
	{
		return default(bool);
	}

	[Token(Token = "0x60023D5")]
	[Address(RVA = "0x53D0700", Offset = "0x53CF700", VA = "0x53D0700")]
	private void SetAppXConfiguration()
	{
	}
}
