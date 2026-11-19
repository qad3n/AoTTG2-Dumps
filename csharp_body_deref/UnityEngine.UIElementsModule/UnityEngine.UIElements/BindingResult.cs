// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BindingResult
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000024")]
public readonly struct BindingResult
{
	[Token(Token = "0x17000028")]
	public BindingStatus status
	{
		[Token(Token = "0x60000A5")]
		[Address(RVA = "0x6A7E260", Offset = "0x6A7D260", VA = "0x6A7E260")]
		[CompilerGenerated]
		get
		{
			return default(BindingStatus);
		}
	}

	[Token(Token = "0x17000029")]
	public string message
	{
		[Token(Token = "0x60000A6")]
		[Address(RVA = "0x6A7E270", Offset = "0x6A7D270", VA = "0x6A7E270")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x6A7E280", Offset = "0x6A7D280", VA = "0x6A7E280")]
	public BindingResult(BindingStatus status, [Optional] string message)
	{
	}
}
