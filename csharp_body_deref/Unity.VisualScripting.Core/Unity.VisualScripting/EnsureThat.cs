// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.EnsureThat
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Text.RegularExpressions;
using Il2CppDummyDll;
using JetBrains.Annotations;

namespace Unity.VisualScripting;

[Token(Token = "0x2000054")]
public class EnsureThat
{
	[Token(Token = "0x400006A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal string paramName;

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x4CA4540", Offset = "0x4CA4540", VA = "0x4CA4540")]
	public void IsTrue(bool value)
	{
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x4CA4690", Offset = "0x4CA4690", VA = "0x4CA4690")]
	public void IsFalse(bool value)
	{
	}

	[Token(Token = "0x6000221")]
	public void HasItems<T>(T value) where T : class, ICollection
	{
	}

	[Token(Token = "0x6000222")]
	public void HasItems<T>(ICollection<T> value)
	{
	}

	[Token(Token = "0x6000223")]
	public void HasItems<T>(T[] value)
	{
	}

	[Token(Token = "0x6000224")]
	public void HasNoNullItem<T>(T value) where T : class, IEnumerable
	{
	}

	[Token(Token = "0x6000225")]
	public void HasItems<T>(IList<T> value)
	{
	}

	[Token(Token = "0x6000226")]
	public void HasItems<TKey, TValue>(IDictionary<TKey, TValue> value)
	{
	}

	[Token(Token = "0x6000227")]
	public void SizeIs<T>(T[] value, int expected)
	{
	}

	[Token(Token = "0x6000228")]
	public void SizeIs<T>(T[] value, long expected)
	{
	}

	[Token(Token = "0x6000229")]
	public void SizeIs<T>(T value, int expected) where T : ICollection
	{
	}

	[Token(Token = "0x600022A")]
	public void SizeIs<T>(T value, long expected) where T : ICollection
	{
	}

	[Token(Token = "0x600022B")]
	public void SizeIs<T>(ICollection<T> value, int expected)
	{
	}

	[Token(Token = "0x600022C")]
	public void SizeIs<T>(ICollection<T> value, long expected)
	{
	}

	[Token(Token = "0x600022D")]
	public void SizeIs<T>(IList<T> value, int expected)
	{
	}

	[Token(Token = "0x600022E")]
	public void SizeIs<T>(IList<T> value, long expected)
	{
	}

	[Token(Token = "0x600022F")]
	public void SizeIs<TKey, TValue>(IDictionary<TKey, TValue> value, int expected)
	{
	}

	[Token(Token = "0x6000230")]
	public void SizeIs<TKey, TValue>(IDictionary<TKey, TValue> value, long expected)
	{
	}

	[Token(Token = "0x6000231")]
	public void IsKeyOf<TKey, TValue>(IDictionary<TKey, TValue> value, TKey expectedKey, [Optional] string keyLabel)
	{
	}

	[Token(Token = "0x6000232")]
	public void Any<T>(IList<T> value, Func<T, bool> predicate)
	{
	}

	[Token(Token = "0x6000233")]
	public void Any<T>(ICollection<T> value, Func<T, bool> predicate)
	{
	}

	[Token(Token = "0x6000234")]
	public void Any<T>(T[] value, Func<T, bool> predicate)
	{
	}

	[Token(Token = "0x6000235")]
	public void Is<T>(T param, T expected) where T : struct, IComparable<T>
	{
	}

	[Token(Token = "0x6000236")]
	public void IsNot<T>(T param, T expected) where T : struct, IComparable<T>
	{
	}

	[Token(Token = "0x6000237")]
	public void IsLt<T>(T param, T limit) where T : struct, IComparable<T>
	{
	}

	[Token(Token = "0x6000238")]
	public void IsLte<T>(T param, T limit) where T : struct, IComparable<T>
	{
	}

	[Token(Token = "0x6000239")]
	public void IsGt<T>(T param, T limit) where T : struct, IComparable<T>
	{
	}

	[Token(Token = "0x600023A")]
	public void IsGte<T>(T param, T limit) where T : struct, IComparable<T>
	{
	}

	[Token(Token = "0x600023B")]
	public void IsInRange<T>(T param, T min, T max) where T : struct, IComparable<T>
	{
	}

	[Token(Token = "0x600023C")]
	[Address(RVA = "0x4CA47E0", Offset = "0x4CA47E0", VA = "0x4CA47E0")]
	public void IsNotEmpty(Guid value)
	{
	}

	[Token(Token = "0x600023D")]
	public void IsNotNull<T>(T? value) where T : struct
	{
	}

	[Token(Token = "0x600023E")]
	public void IsNull<T>([NoEnumeration] T value)
	{
	}

	[Token(Token = "0x600023F")]
	public void IsNotNull<T>([NoEnumeration] T value)
	{
	}

	[Token(Token = "0x6000240")]
	[Address(RVA = "0x4CA4940", Offset = "0x4CA4940", VA = "0x4CA4940")]
	public void HasAttribute(Type param, Type attributeType)
	{
	}

	[Token(Token = "0x6000241")]
	public void HasAttribute<TAttribute>(Type param) where TAttribute : Attribute
	{
	}

	[Token(Token = "0x6000242")]
	[Address(RVA = "0x4CA4DD0", Offset = "0x4CA4DD0", VA = "0x4CA4DD0")]
	private void HasConstructorAccepting(Type param, Type[] parameterTypes, bool nonPublic)
	{
	}

	[Token(Token = "0x6000243")]
	[Address(RVA = "0x4CA50A0", Offset = "0x4CA50A0", VA = "0x4CA50A0")]
	public void HasConstructorAccepting(Type param, params Type[] parameterTypes)
	{
	}

	[Token(Token = "0x6000244")]
	[Address(RVA = "0x4CA50B0", Offset = "0x4CA50B0", VA = "0x4CA50B0")]
	public void HasPublicConstructorAccepting(Type param, params Type[] parameterTypes)
	{
	}

	[Token(Token = "0x6000245")]
	[Address(RVA = "0x4CA50C0", Offset = "0x4CA50C0", VA = "0x4CA50C0")]
	public void IsNotNullOrWhiteSpace(string value)
	{
	}

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x4CA5360", Offset = "0x4CA5360", VA = "0x4CA5360")]
	public void IsNotNullOrEmpty(string value)
	{
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x4CA5220", Offset = "0x4CA5220", VA = "0x4CA5220")]
	public void IsNotNull(string value)
	{
	}

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x4CA54A0", Offset = "0x4CA54A0", VA = "0x4CA54A0")]
	public void IsNotEmpty(string value)
	{
	}

	[Token(Token = "0x6000249")]
	[Address(RVA = "0x4CA55F0", Offset = "0x4CA55F0", VA = "0x4CA55F0")]
	public void HasLengthBetween(string value, int minLength, int maxLength)
	{
	}

	[Token(Token = "0x600024A")]
	[Address(RVA = "0x4CA5850", Offset = "0x4CA5850", VA = "0x4CA5850")]
	public void Matches(string value, string match)
	{
	}

	[Token(Token = "0x600024B")]
	[Address(RVA = "0x4CA58C0", Offset = "0x4CA58C0", VA = "0x4CA58C0")]
	public void Matches(string value, Regex match)
	{
	}

	[Token(Token = "0x600024C")]
	[Address(RVA = "0x4CA5A90", Offset = "0x4CA5A90", VA = "0x4CA5A90")]
	public void SizeIs(string value, int expected)
	{
	}

	[Token(Token = "0x600024D")]
	[Address(RVA = "0x4CA5C90", Offset = "0x4CA5C90", VA = "0x4CA5C90")]
	public void IsEqualTo(string value, string expected)
	{
	}

	[Token(Token = "0x600024E")]
	[Address(RVA = "0x4CA5F10", Offset = "0x4CA5F10", VA = "0x4CA5F10")]
	public void IsEqualTo(string value, string expected, StringComparison comparison)
	{
	}

	[Token(Token = "0x600024F")]
	[Address(RVA = "0x4CA6140", Offset = "0x4CA6140", VA = "0x4CA6140")]
	public void IsNotEqualTo(string value, string expected)
	{
	}

	[Token(Token = "0x6000250")]
	[Address(RVA = "0x4CA6330", Offset = "0x4CA6330", VA = "0x4CA6330")]
	public void IsNotEqualTo(string value, string expected, StringComparison comparison)
	{
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x4CA6560", Offset = "0x4CA6560", VA = "0x4CA6560")]
	public void IsGuid(string value)
	{
	}

	[Token(Token = "0x6000252")]
	[Address(RVA = "0x4CA5E80", Offset = "0x4CA5E80", VA = "0x4CA5E80")]
	private bool StringEquals(string x, string y, [Optional] StringComparison? comparison)
	{
		return default(bool);
	}

	[Token(Token = "0x6000253")]
	public void IsOfType<T>(T param, Type expectedType)
	{
	}

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x4CA6720", Offset = "0x4CA6720", VA = "0x4CA6720")]
	public void IsOfType(Type param, Type expectedType)
	{
	}

	[Token(Token = "0x6000255")]
	public void IsOfType<T>(object param)
	{
	}

	[Token(Token = "0x6000256")]
	public void IsOfType<T>(Type param)
	{
	}

	[Token(Token = "0x6000257")]
	public void IsNotDefault<T>(T param) where T : struct
	{
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x4CA4530", Offset = "0x4CA4530", VA = "0x4CA4530")]
	public EnsureThat()
	{
	}
}
