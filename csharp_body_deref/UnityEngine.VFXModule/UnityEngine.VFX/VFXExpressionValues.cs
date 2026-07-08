using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.VFX;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000003")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeType(Header = "Modules/VFX/Public/VFXExpressionValues.h")]
public class VFXExpressionValues
{
	[Token(Token = "0x4000004")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x4DE1E10", Offset = "0x4DE1E10", VA = "0x4DE1E10")]
	private VFXExpressionValues()
	{
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x4DE1E20", Offset = "0x4DE1E20", VA = "0x4DE1E20")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static VFXExpressionValues CreateExpressionValuesWrapper(IntPtr ptr)
	{
		return null;
	}
}
