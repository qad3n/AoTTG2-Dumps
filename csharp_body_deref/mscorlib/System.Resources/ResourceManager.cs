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
[Token(Token = "0x20004B9")]
[ComVisible(true)]
public class ResourceManager
{
	[Token(Token = "0x20004BA")]
	internal class CultureNameResourceSetPair
	{
		[Token(Token = "0x6002387")]
		[Address(RVA = "0x3BCB0F0", Offset = "0x3BCB0F0", VA = "0x3BCB0F0")]
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
			[Address(RVA = "0x3BCB180", Offset = "0x3BCB180", VA = "0x3BCB180")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700048F")]
		internal Type LocationInfo
		{
			[Token(Token = "0x600238A")]
			[Address(RVA = "0x3BCB1A0", Offset = "0x3BCB1A0", VA = "0x3BCB1A0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000490")]
		internal Type UserResourceSet
		{
			[Token(Token = "0x600238B")]
			[Address(RVA = "0x3BCB1C0", Offset = "0x3BCB1C0", VA = "0x3BCB1C0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000491")]
		internal string BaseNameField
		{
			[Token(Token = "0x600238C")]
			[Address(RVA = "0x3BCB1E0", Offset = "0x3BCB1E0", VA = "0x3BCB1E0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000492")]
		internal CultureInfo NeutralResourcesCulture
		{
			[Token(Token = "0x600238D")]
			[Address(RVA = "0x3BCB200", Offset = "0x3BCB200", VA = "0x3BCB200")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000493")]
		internal bool LookedForSatelliteContractVersion
		{
			[Token(Token = "0x600238F")]
			[Address(RVA = "0x3BCB250", Offset = "0x3BCB250", VA = "0x3BCB250")]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x6002390")]
			[Address(RVA = "0x3BCB270", Offset = "0x3BCB270", VA = "0x3BCB270")]
			set
			{
			}
		}

		[Token(Token = "0x17000494")]
		internal Version SatelliteContractVersion
		{
			[Token(Token = "0x6002391")]
			[Address(RVA = "0x3BCB290", Offset = "0x3BCB290", VA = "0x3BCB290")]
			get
			{
				return null;
			}
			[Token(Token = "0x6002392")]
			[Address(RVA = "0x3BCB2B0", Offset = "0x3BCB2B0", VA = "0x3BCB2B0")]
			set
			{
			}
		}

		[Token(Token = "0x17000495")]
		internal UltimateResourceFallbackLocation FallbackLoc
		{
			[Token(Token = "0x6002394")]
			[Address(RVA = "0x3BCB340", Offset = "0x3BCB340", VA = "0x3BCB340")]
			get
			{
				return default(UltimateResourceFallbackLocation);
			}
		}

		[Token(Token = "0x17000496")]
		internal System.Reflection.RuntimeAssembly CallingAssembly
		{
			[Token(Token = "0x6002395")]
			[Address(RVA = "0x3BCB360", Offset = "0x3BCB360", VA = "0x3BCB360")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000497")]
		internal System.Reflection.RuntimeAssembly MainAssembly
		{
			[Token(Token = "0x6002396")]
			[Address(RVA = "0x3BCB380", Offset = "0x3BCB380", VA = "0x3BCB380")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000498")]
		internal string BaseName
		{
			[Token(Token = "0x6002397")]
			[Address(RVA = "0x3BCB3F0", Offset = "0x3BCB3F0", VA = "0x3BCB3F0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002388")]
		[Address(RVA = "0x3BCB100", Offset = "0x3BCB100", VA = "0x3BCB100")]
		internal ResourceManagerMediator(ResourceManager rm)
		{
		}

		[Token(Token = "0x600238E")]
		[Address(RVA = "0x3BCB220", Offset = "0x3BCB220", VA = "0x3BCB220")]
		internal string GetResourceFileName(CultureInfo culture)
		{
			return null;
		}

		[Token(Token = "0x6002393")]
		[Address(RVA = "0x3BCB2D0", Offset = "0x3BCB2D0", VA = "0x3BCB2D0")]
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
		[Address(RVA = "0x3BC94F0", Offset = "0x3BC94F0", VA = "0x3BC94F0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700048C")]
	public virtual bool IgnoreCase
	{
		[Token(Token = "0x600237B")]
		[Address(RVA = "0x3BC9500", Offset = "0x3BC9500", VA = "0x3BC9500", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700048D")]
	protected UltimateResourceFallbackLocation FallbackLocation
	{
		[Token(Token = "0x600237C")]
		[Address(RVA = "0x3BC9510", Offset = "0x3BC9510", VA = "0x3BC9510")]
		get
		{
			return default(UltimateResourceFallbackLocation);
		}
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002373")]
	[Address(RVA = "0x3BC8B50", Offset = "0x3BC8B50", VA = "0x3BC8B50")]
	private void Init()
	{
	}

	[Token(Token = "0x6002374")]
	[Address(RVA = "0x3BC8C60", Offset = "0x3BC8C60", VA = "0x3BC8C60")]
	protected ResourceManager()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002375")]
	[Address(RVA = "0x3BC8D40", Offset = "0x3BC8D40", VA = "0x3BC8D40")]
	public ResourceManager(Type resourceSource)
	{
	}

	[Token(Token = "0x6002376")]
	[Address(RVA = "0x3BC9240", Offset = "0x3BC9240", VA = "0x3BC9240")]
	[OnDeserializing]
	private void OnDeserializing(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002377")]
	[Address(RVA = "0x3BC9290", Offset = "0x3BC9290", VA = "0x3BC9290")]
	[OnDeserialized]
	private void OnDeserialized(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002378")]
	[Address(RVA = "0x3BC9480", Offset = "0x3BC9480", VA = "0x3BC9480")]
	[OnSerializing]
	private void OnSerializing(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002379")]
	[Address(RVA = "0x3BC90B0", Offset = "0x3BC90B0", VA = "0x3BC90B0")]
	private void CommonAssemblyInit()
	{
	}

	[Token(Token = "0x600237D")]
	[Address(RVA = "0x3BC9520", Offset = "0x3BC9520", VA = "0x3BC9520", Slot = "6")]
	protected virtual string GetResourceFileName(CultureInfo culture)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x600237E")]
	[Address(RVA = "0x3BC9650", Offset = "0x3BC9650", VA = "0x3BC9650", Slot = "7")]
	public virtual ResourceSet GetResourceSet(CultureInfo culture, bool createIfNotExists, bool tryParents)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x600237F")]
	[Address(RVA = "0x3BC9BA0", Offset = "0x3BC9BA0", VA = "0x3BC9BA0", Slot = "8")]
	protected virtual ResourceSet InternalGetResourceSet(CultureInfo culture, bool createIfNotExists, bool tryParents)
	{
		return null;
	}

	[Token(Token = "0x6002380")]
	[Address(RVA = "0x3BC9BC0", Offset = "0x3BC9BC0", VA = "0x3BC9BC0")]
	private ResourceSet InternalGetResourceSet(CultureInfo requestedCulture, bool createIfNotExists, bool tryParents, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[Token(Token = "0x6002381")]
	[Address(RVA = "0x3BC99E0", Offset = "0x3BC99E0", VA = "0x3BC99E0")]
	private static void AddResourceSet(Dictionary<string, ResourceSet> localResourceSets, string cultureName, ref ResourceSet rs)
	{
	}

	[Token(Token = "0x6002382")]
	[Address(RVA = "0x3BCA5C0", Offset = "0x3BCA5C0", VA = "0x3BCA5C0")]
	protected static Version GetSatelliteContractVersion(Assembly a)
	{
		return null;
	}

	[Token(Token = "0x6002383")]
	[Address(RVA = "0x3BCAE10", Offset = "0x3BCAE10", VA = "0x3BCAE10")]
	protected static CultureInfo GetNeutralResourcesLanguage(Assembly a)
	{
		return null;
	}

	[Token(Token = "0x6002384")]
	[Address(RVA = "0x3BC8930", Offset = "0x3BC8930", VA = "0x3BC8930")]
	internal static bool CompareNames(string asmTypeName1, string typeName2, AssemblyName asmName2)
	{
		return default(bool);
	}

	[Token(Token = "0x6002385")]
	[Address(RVA = "0x3BC90A0", Offset = "0x3BC90A0", VA = "0x3BC90A0")]
	private void SetAppXConfiguration()
	{
	}
}
