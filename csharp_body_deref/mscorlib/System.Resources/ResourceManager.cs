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
[Token(Token = "0x20004E9")]
[ComVisible(true)]
public class ResourceManager
{
	[Token(Token = "0x20004EA")]
	internal class CultureNameResourceSetPair
	{
		[Token(Token = "0x6002409")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public CultureNameResourceSetPair()
		{
		}
	}

	[Token(Token = "0x20004EB")]
	internal class ResourceManagerMediator
	{
		[Token(Token = "0x400138C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private ResourceManager _rm;

		[Token(Token = "0x17000491")]
		internal string ModuleDir
		{
			[Token(Token = "0x600240B")]
			[Address(RVA = "0x1A4D250", Offset = "0x1A4B850", VA = "0x181A4D250")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000492")]
		internal Type LocationInfo
		{
			[Token(Token = "0x600240C")]
			[Address(RVA = "0x1A4D190", Offset = "0x1A4B790", VA = "0x181A4D190")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000493")]
		internal Type UserResourceSet
		{
			[Token(Token = "0x600240D")]
			[Address(RVA = "0x1A4D2B0", Offset = "0x1A4B8B0", VA = "0x181A4D2B0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000494")]
		internal string BaseNameField
		{
			[Token(Token = "0x600240E")]
			[Address(RVA = "0x11282C0", Offset = "0x11268C0", VA = "0x1811282C0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000495")]
		internal CultureInfo NeutralResourcesCulture
		{
			[Token(Token = "0x600240F")]
			[Address(RVA = "0x1A4D270", Offset = "0x1A4B870", VA = "0x181A4D270")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000496")]
		internal bool LookedForSatelliteContractVersion
		{
			[Token(Token = "0x6002411")]
			[Address(RVA = "0x1A4D1B0", Offset = "0x1A4B7B0", VA = "0x181A4D1B0")]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x6002412")]
			[Address(RVA = "0x1A4D2D0", Offset = "0x1A4B8D0", VA = "0x181A4D2D0")]
			set
			{
			}
		}

		[Token(Token = "0x17000497")]
		internal Version SatelliteContractVersion
		{
			[Token(Token = "0x6002413")]
			[Address(RVA = "0x1A4D290", Offset = "0x1A4B890", VA = "0x181A4D290")]
			get
			{
				return null;
			}
			[Token(Token = "0x6002414")]
			[Address(RVA = "0x1A4D2F0", Offset = "0x1A4B8F0", VA = "0x181A4D2F0")]
			set
			{
			}
		}

		[Token(Token = "0x17000498")]
		internal UltimateResourceFallbackLocation FallbackLoc
		{
			[Token(Token = "0x6002416")]
			[Address(RVA = "0x1A4D170", Offset = "0x1A4B770", VA = "0x181A4D170")]
			get
			{
				return default(UltimateResourceFallbackLocation);
			}
		}

		[Token(Token = "0x17000499")]
		internal System.Reflection.RuntimeAssembly CallingAssembly
		{
			[Token(Token = "0x6002417")]
			[Address(RVA = "0x1A4D150", Offset = "0x1A4B750", VA = "0x181A4D150")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700049A")]
		internal System.Reflection.RuntimeAssembly MainAssembly
		{
			[Token(Token = "0x6002418")]
			[Address(RVA = "0x1A4D1D0", Offset = "0x1A4B7D0", VA = "0x181A4D1D0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700049B")]
		internal string BaseName
		{
			[Token(Token = "0x6002419")]
			[Address(RVA = "0x1A4D120", Offset = "0x1A4B720", VA = "0x181A4D120")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600240A")]
		[Address(RVA = "0x1A4D0A0", Offset = "0x1A4B6A0", VA = "0x181A4D0A0")]
		internal ResourceManagerMediator(ResourceManager rm)
		{
		}

		[Token(Token = "0x6002410")]
		[Address(RVA = "0x1A4D020", Offset = "0x1A4B620", VA = "0x181A4D020")]
		internal string GetResourceFileName(CultureInfo culture)
		{
			return null;
		}

		[Token(Token = "0x6002415")]
		[Address(RVA = "0x1A4D050", Offset = "0x1A4B650", VA = "0x181A4D050")]
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

	[Token(Token = "0x1700048E")]
	public virtual string BaseName
	{
		[Token(Token = "0x60023FC")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700048F")]
	public virtual bool IgnoreCase
	{
		[Token(Token = "0x60023FD")]
		[Address(RVA = "0x1937790", Offset = "0x1935D90", VA = "0x181937790", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000490")]
	protected UltimateResourceFallbackLocation FallbackLocation
	{
		[Token(Token = "0x60023FE")]
		[Address(RVA = "0x1A4F710", Offset = "0x1A4DD10", VA = "0x181A4F710")]
		get
		{
			return default(UltimateResourceFallbackLocation);
		}
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60023F5")]
	[Address(RVA = "0x1A4E500", Offset = "0x1A4CB00", VA = "0x181A4E500")]
	private void Init()
	{
	}

	[Token(Token = "0x60023F6")]
	[Address(RVA = "0x1A4F150", Offset = "0x1A4D750", VA = "0x181A4F150")]
	protected ResourceManager()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60023F7")]
	[Address(RVA = "0x1A4F250", Offset = "0x1A4D850", VA = "0x181A4F250")]
	public ResourceManager(Type resourceSource)
	{
	}

	[Token(Token = "0x60023F8")]
	[Address(RVA = "0x1A4EE80", Offset = "0x1A4D480", VA = "0x181A4EE80")]
	[OnDeserializing]
	private void OnDeserializing(StreamingContext ctx)
	{
	}

	[Token(Token = "0x60023F9")]
	[Address(RVA = "0x1A4EC70", Offset = "0x1A4D270", VA = "0x181A4EC70")]
	[OnDeserialized]
	private void OnDeserialized(StreamingContext ctx)
	{
	}

	[Token(Token = "0x60023FA")]
	[Address(RVA = "0x1A4EED0", Offset = "0x1A4D4D0", VA = "0x181A4EED0")]
	[OnSerializing]
	private void OnSerializing(StreamingContext ctx)
	{
	}

	[Token(Token = "0x60023FB")]
	[Address(RVA = "0x1A4D4A0", Offset = "0x1A4BAA0", VA = "0x181A4D4A0")]
	private void CommonAssemblyInit()
	{
	}

	[Token(Token = "0x60023FF")]
	[Address(RVA = "0x1A4D8A0", Offset = "0x1A4BEA0", VA = "0x181A4D8A0", Slot = "6")]
	protected virtual string GetResourceFileName(CultureInfo culture)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002400")]
	[Address(RVA = "0x1A4D9E0", Offset = "0x1A4BFE0", VA = "0x181A4D9E0", Slot = "7")]
	public virtual ResourceSet GetResourceSet(CultureInfo culture, bool createIfNotExists, bool tryParents)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002401")]
	[Address(RVA = "0x1A4E5C0", Offset = "0x1A4CBC0", VA = "0x181A4E5C0", Slot = "8")]
	protected virtual ResourceSet InternalGetResourceSet(CultureInfo culture, bool createIfNotExists, bool tryParents)
	{
		return null;
	}

	[Token(Token = "0x6002402")]
	[Address(RVA = "0x1A4E5F0", Offset = "0x1A4CBF0", VA = "0x181A4E5F0")]
	private ResourceSet InternalGetResourceSet(CultureInfo requestedCulture, bool createIfNotExists, bool tryParents, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[Token(Token = "0x6002403")]
	[Address(RVA = "0x1A4D320", Offset = "0x1A4B920", VA = "0x181A4D320")]
	private static void AddResourceSet(Dictionary<string, ResourceSet> localResourceSets, string cultureName, ref ResourceSet rs)
	{
	}

	[Token(Token = "0x6002404")]
	[Address(RVA = "0x1A4DEF0", Offset = "0x1A4C4F0", VA = "0x181A4DEF0")]
	protected static Version GetSatelliteContractVersion(Assembly a)
	{
		return null;
	}

	[Token(Token = "0x6002405")]
	[Address(RVA = "0x1A4D880", Offset = "0x1A4BE80", VA = "0x181A4D880")]
	protected static CultureInfo GetNeutralResourcesLanguage(Assembly a)
	{
		return null;
	}

	[Token(Token = "0x6002406")]
	[Address(RVA = "0x1A4D630", Offset = "0x1A4BC30", VA = "0x181A4D630")]
	internal static bool CompareNames(string asmTypeName1, string typeName2, AssemblyName asmName2)
	{
		return default(bool);
	}

	[Token(Token = "0x6002407")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private void SetAppXConfiguration()
	{
	}
}
