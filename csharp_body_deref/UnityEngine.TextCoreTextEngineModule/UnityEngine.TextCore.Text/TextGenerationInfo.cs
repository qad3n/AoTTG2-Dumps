// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.TextGenerationInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x200005C")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
internal static class TextGenerationInfo
{
	[Token(Token = "0x17000077")]
	public static int CurrentGenerationIteration
	{
		[Token(Token = "0x600029D")]
		[Address(RVA = "0x6A4E360", Offset = "0x6A4D360", VA = "0x6A4E360")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600029E")]
		[Address(RVA = "0x6A4E3A0", Offset = "0x6A4D3A0", VA = "0x6A4E3A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600029F")]
	[Address(RVA = "0x6A4E3E0", Offset = "0x6A4D3E0", VA = "0x6A4E3E0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr Create(bool isPermanent);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002A0")]
	[Address(RVA = "0x6A4E410", Offset = "0x6A4D410", VA = "0x6A4E410")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void Destroy(IntPtr ptr);

	[Token(Token = "0x60002A1")]
	[Address(RVA = "0x6A4E440", Offset = "0x6A4D440", VA = "0x6A4E440")]
	public static void OnRepaintEnd()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002A2")]
	[Address(RVA = "0x6A4E4E0", Offset = "0x6A4D4E0", VA = "0x6A4E4E0")]
	private static extern void DestroyAllTempAllocations();
}
