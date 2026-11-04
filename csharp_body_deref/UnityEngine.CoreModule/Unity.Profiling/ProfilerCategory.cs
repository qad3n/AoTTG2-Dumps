// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Profiling.ProfilerCategory
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace Unity.Profiling;

[StructLayout((LayoutKind)2)]
[Token(Token = "0x2000025")]
[UnityEngine.Scripting.UsedByNativeCode]
public readonly struct ProfilerCategory
{
	[Token(Token = "0x4000035")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly ushort m_CategoryId;

	[Token(Token = "0x17000008")]
	public string Name
	{
		[Token(Token = "0x6000075")]
		[Address(RVA = "0x2ECDE20", Offset = "0x2ECC420", VA = "0x182ECDE20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000009")]
	public static ProfilerCategory Scripts
	{
		[Token(Token = "0x6000077")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040")]
		get
		{
			return default(ProfilerCategory);
		}
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x17073B0", Offset = "0x17059B0", VA = "0x1817073B0")]
	internal ProfilerCategory(ushort category)
	{
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x2ECDE10", Offset = "0x2ECC410", VA = "0x182ECDE10", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x2ECDF40", Offset = "0x2ECC540", VA = "0x182ECDF40")]
	public static implicit operator ushort(ProfilerCategory category)
	{
		return default(ushort);
	}
}
