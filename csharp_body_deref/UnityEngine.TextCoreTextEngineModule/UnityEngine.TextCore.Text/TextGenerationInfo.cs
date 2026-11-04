// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.TextGenerationInfo
// Update status: NEW in this game update
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
		[Address(RVA = "0x3048690", Offset = "0x3046C90", VA = "0x183048690")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600029E")]
		[Address(RVA = "0x30486D0", Offset = "0x3046CD0", VA = "0x1830486D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600029F")]
	[Address(RVA = "0x3048550", Offset = "0x3046B50", VA = "0x183048550")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr Create(bool isPermanent);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002A0")]
	[Address(RVA = "0x30485C0", Offset = "0x3046BC0", VA = "0x1830485C0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void Destroy(IntPtr ptr);

	[Token(Token = "0x60002A1")]
	[Address(RVA = "0x3048600", Offset = "0x3046C00", VA = "0x183048600")]
	public static void OnRepaintEnd()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002A2")]
	[Address(RVA = "0x3048590", Offset = "0x3046B90", VA = "0x183048590")]
	private static extern void DestroyAllTempAllocations();
}
