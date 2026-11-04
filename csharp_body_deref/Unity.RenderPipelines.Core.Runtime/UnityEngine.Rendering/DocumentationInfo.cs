// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.DocumentationInfo
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000EA")]
public class DocumentationInfo
{
	[Token(Token = "0x20000EB")]
	public enum Location
	{
		[Token(Token = "0x400030B")]
		Package,
		[Token(Token = "0x400030C")]
		Manual
	}

	[Token(Token = "0x20000EC")]
	[Conditional("UNITY_EDITOR")]
	[AttributeUsage(AttributeTargets.Class, AllowMultiple = false, Inherited = false)]
	public sealed class SourceAttribute : Attribute
	{
		[Token(Token = "0x170000ED")]
		public Location Location
		{
			[Token(Token = "0x6000863")]
			[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
			[CompilerGenerated]
			get
			{
				return default(Location);
			}
		}

		[Token(Token = "0x6000864")]
		[Address(RVA = "0x1A29130", Offset = "0x1A27730", VA = "0x181A29130")]
		public SourceAttribute(Location location)
		{
		}
	}

	[Token(Token = "0x4000305")]
	private const string fallbackVersion = "13.1";

	[Token(Token = "0x4000306")]
	private const string packageDocumentationUrl = "https://docs.unity3d.com/Packages/{0}@{1}/manual/";

	[Token(Token = "0x4000307")]
	private const string url = "https://docs.unity3d.com/Packages/{0}@{1}/manual/{2}.html{3}";

	[Token(Token = "0x4000308")]
	private const string k_ManualUrlFormat = "https://docs.unity3d.com/{0}/Documentation/Manual/{1}.html{2}";

	[Token(Token = "0x4000309")]
	private const string k_ManualFallbackUrlFormat = "https://docs.unity3d.com/Manual/{0}.html{1}";

	[Token(Token = "0x170000EC")]
	public static string version
	{
		[Token(Token = "0x600085A")]
		[Address(RVA = "0x2B0BD80", Offset = "0x2B0A380", VA = "0x182B0BD80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600085B")]
	[Address(RVA = "0x2B0B5E0", Offset = "0x2B09BE0", VA = "0x182B0B5E0")]
	public static string GetPackageLink(string packageName, string packageVersion, string pageName)
	{
		return null;
	}

	[Token(Token = "0x600085C")]
	[Address(RVA = "0x2B0B790", Offset = "0x2B09D90", VA = "0x182B0B790")]
	public static string GetPackageLink(string packageName, string packageVersion, string pageName, string pageHash)
	{
		return null;
	}

	[Token(Token = "0x600085D")]
	[Address(RVA = "0x2B0BBA0", Offset = "0x2B0A1A0", VA = "0x182B0BBA0")]
	public static string GetPageLink(string packageName, string pageName)
	{
		return null;
	}

	[Token(Token = "0x600085E")]
	[Address(RVA = "0x2B0B980", Offset = "0x2B09F80", VA = "0x182B0B980")]
	public static string GetPageLink(string packageName, string pageName, string pageHash)
	{
		return null;
	}

	[Token(Token = "0x600085F")]
	[Address(RVA = "0x2B0B4F0", Offset = "0x2B09AF0", VA = "0x182B0B4F0")]
	public static string GetDefaultPackageLink(string packageName, string packageVersion)
	{
		return null;
	}

	[Token(Token = "0x6000860")]
	[Address(RVA = "0x2B0B490", Offset = "0x2B09A90", VA = "0x182B0B490")]
	public static string GetDefaultPackageLink(string packageName)
	{
		return null;
	}

	[Token(Token = "0x6000861")]
	[Address(RVA = "0x2B0B540", Offset = "0x2B09B40", VA = "0x182B0B540")]
	public static string GetManualLink(string pageName, string pageHash = "")
	{
		return null;
	}

	[Token(Token = "0x6000862")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public DocumentationInfo()
	{
	}
}
