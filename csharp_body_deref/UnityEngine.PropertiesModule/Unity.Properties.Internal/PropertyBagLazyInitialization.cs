// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.Internal.PropertyBagLazyInitialization
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace Unity.Properties.Internal;

[Token(Token = "0x200009F")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
internal static class PropertyBagLazyInitialization
{
	[Token(Token = "0x4000097")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<Type, Func<IPropertyBag>> s_LazyPropertyBagRegistrations;

	[Token(Token = "0x6000268")]
	[Address(RVA = "0x69EF650", Offset = "0x69EE650", VA = "0x69EF650")]
	public static void AddLazyRegistration(Type type, Func<IPropertyBag> registration)
	{
	}

	[Token(Token = "0x6000269")]
	[Address(RVA = "0x69EF6F0", Offset = "0x69EE6F0", VA = "0x69EF6F0")]
	public static bool HasLazyRegistration(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x600026A")]
	[Address(RVA = "0x69EF790", Offset = "0x69EE790", VA = "0x69EF790")]
	public static bool TryGetRegistrationDelegate(Type type, out Func<IPropertyBag> registrationDelegate)
	{
		return default(bool);
	}

	[Token(Token = "0x600026B")]
	[Address(RVA = "0x69EF830", Offset = "0x69EE830", VA = "0x69EF830")]
	public static void RemoveRegistration(Type type)
	{
	}
}
