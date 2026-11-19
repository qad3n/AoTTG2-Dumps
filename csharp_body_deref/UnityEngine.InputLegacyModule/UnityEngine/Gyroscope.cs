// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Gyroscope
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000009")]
[UnityEngine.Bindings.NativeHeader("Runtime/Input/GetInput.h")]
public class Gyroscope
{
	[Token(Token = "0x400002E")]
	[FieldOffset(Offset = "0x10")]
	private int m_GyroIndex;

	[Token(Token = "0x1700000F")]
	public Vector3 rotationRateUnbiased
	{
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x69BDCD0", Offset = "0x69BCCD0", VA = "0x69BDCD0")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000010")]
	public bool enabled
	{
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x69BDD20", Offset = "0x69BCD20", VA = "0x69BDD20")]
		set
		{
		}
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x69BDBE0", Offset = "0x69BCBE0", VA = "0x69BDBE0")]
	internal Gyroscope(int index)
	{
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x69BDC00", Offset = "0x69BCC00", VA = "0x69BDC00")]
	[UnityEngine.Bindings.FreeFunction("GetGyroRotationRateUnbiased")]
	private static Vector3 rotationRateUnbiased_Internal(int idx)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000014")]
	[Address(RVA = "0x69BDC90", Offset = "0x69BCC90", VA = "0x69BDC90")]
	[UnityEngine.Bindings.FreeFunction("SetGyroEnabled")]
	private static extern void setEnabled_Internal(int idx, bool enabled);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000017")]
	[Address(RVA = "0x69BDC50", Offset = "0x69BCC50", VA = "0x69BDC50")]
	private static extern void rotationRateUnbiased_Internal_Injected(int idx, out Vector3 ret);
}
