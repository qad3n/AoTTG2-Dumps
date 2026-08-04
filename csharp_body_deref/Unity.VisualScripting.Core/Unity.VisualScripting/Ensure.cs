// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.Ensure
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000053")]
public static class Ensure
{
	[Token(Token = "0x4000068")]
	[FieldOffset(Offset = "0x0")]
	private static readonly EnsureThat instance;

	[Token(Token = "0x17000078")]
	public static bool IsActive
	{
		[Token(Token = "0x6000218")]
		[Address(RVA = "0x4CA4190", Offset = "0x4CA4190", VA = "0x4CA4190")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000219")]
		[Address(RVA = "0x4CA4200", Offset = "0x4CA4200", VA = "0x4CA4200")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x4CA4250", Offset = "0x4CA4250", VA = "0x4CA4250")]
	public static void Off()
	{
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x4CA4300", Offset = "0x4CA4300", VA = "0x4CA4300")]
	public static void On()
	{
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x4CA2D20", Offset = "0x4CA2D20", VA = "0x4CA2D20")]
	public static EnsureThat That(string paramName)
	{
		return null;
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x4CA43B0", Offset = "0x4CA43B0", VA = "0x4CA43B0")]
	internal static void OnRuntimeMethodLoad()
	{
	}
}
