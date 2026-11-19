// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AttributeHelperEngine
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000171")]
internal class AttributeHelperEngine
{
	[Token(Token = "0x40005C3")]
	[FieldOffset(Offset = "0x0")]
	public static DisallowMultipleComponent[] _disallowMultipleComponentArray;

	[Token(Token = "0x40005C4")]
	[FieldOffset(Offset = "0x8")]
	public static ExecuteInEditMode[] _executeInEditModeArray;

	[Token(Token = "0x40005C5")]
	[FieldOffset(Offset = "0x10")]
	public static RequireComponent[] _requireComponentArray;

	[Token(Token = "0x6000CBF")]
	[Address(RVA = "0x69107E0", Offset = "0x690F7E0", VA = "0x69107E0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static Type GetParentTypeDisallowingMultipleInclusion(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000CC0")]
	[Address(RVA = "0x6910920", Offset = "0x690F920", VA = "0x6910920")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static Type[] GetRequiredComponents(Type klass)
	{
		return null;
	}

	[Token(Token = "0x6000CC1")]
	[Address(RVA = "0x6910E90", Offset = "0x690FE90", VA = "0x6910E90")]
	private static int GetExecuteMode(Type klass)
	{
		return default(int);
	}

	[Token(Token = "0x6000CC2")]
	[Address(RVA = "0x6910F90", Offset = "0x690FF90", VA = "0x6910F90")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static int CheckIsEditorScript(Type klass)
	{
		return default(int);
	}

	[Token(Token = "0x6000CC3")]
	[Address(RVA = "0x69110C0", Offset = "0x69100C0", VA = "0x69110C0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static int GetDefaultExecutionOrderFor(Type klass)
	{
		return default(int);
	}

	[Token(Token = "0x6000CC4")]
	private static T GetCustomAttributeOfType<T>(Type klass) where T : Attribute
	{
		return null;
	}
}
